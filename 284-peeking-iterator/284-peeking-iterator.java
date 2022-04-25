class PeekingIterator implements Iterator<Integer> {
    private final Iterator<Integer> iterator;
    private boolean hasPeeked;
    private Integer peekedElement;
    
	public PeekingIterator(Iterator<Integer> iterator) {
	    if(iterator==null)
	        throw new NullPointerException();
	    else
	        this.iterator = iterator;
	}

	public Integer peek() {
        peekedElement = hasPeeked?peekedElement:iterator.next();
        hasPeeked = true;
        return peekedElement;
	}

	@Override
	public Integer next() {
	    int nextElem = hasPeeked?peekedElement:iterator.next();
        hasPeeked = false;
        return nextElem;
	}

	@Override
	public boolean hasNext() {
	    return hasPeeked || iterator.hasNext();
	}
}