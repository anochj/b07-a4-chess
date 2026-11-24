yo the problem is en passant, the knight, and castling
so i was thinking
each piece has something like getValidMoves(Board board)
it'll return the valid moves
and then we check those moves in the Board
so if the move makes the king go into check its not a valid move

but we need to pass the board to the piece + play the move to see if the king goes into check

but how should we pass the board

copy constructor?

how should we also play the move to check for check? cause if it causes a check, we need to revert

-------
also we need to know if the king, rook moved
we need to know if the pawn did a double push


shafat has 2 more classes
one for the previous board moves, and one for move validation

but i feel like that's a lot of memory story all the board states
maybe we store the board deltas instead

like what changed every move instead of the entire board

It'll be like:

class BoardState {
    initialBoardState
    an array of the moves

    then when we want to check for en passant, we check the array of moves and check if the pawn did a double push prev

    for castling, we just need to see if the king or rooks are in the move array

    for stalemate we can just check if the last two moves the same

    maybe we could use a linked list or do u have another idea
}

do you wanna uml diagram this or should i just start on this