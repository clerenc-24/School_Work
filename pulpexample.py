import pulp

def pulp_example():
    """
    Write the solution of the next integer programming task 
    to the standard output.
    max x0 + x1,
    x0 >= 0,
    x1 >= 0,
    2 * x0 + x1 <= 10
    x0 + 2 * x1 <= 10
    """

    # Variables
    x = [
        pulp.LpVariable("x0", lowBound=0, cat=pulp.LpInteger),
        pulp.LpVariable("x1", lowBound=0, cat=pulp.LpInteger)
    ]
    # Construct a problem
    prob = pulp.LpProblem("Sum_of_two_numbers", pulp.LpMaximize)
    # Give an objective function
    prob += pulp.lpSum(x)
    # Give the constraits
    prob += 2 * x[0] + x[1] <= 10
    prob += x[0] + 2 * x[1] <= 10

    # Print out the solution
    prob.solve(pulp.apis.coin_api.PULP_CBC_CMD(msg=0))
    # The name of the solver for msg=0 to transfer
    #print(prob.solver)
    
    print("Max value:", pulp.value(prob.objective))
    print("Max point:")
    for variable in x:
        print(variable.name + " = " + str(variable.varValue))

if __name__ == '__main__':
    pulp_example()
