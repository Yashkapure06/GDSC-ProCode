MathHelper.multiplyMatrix = function(a, b) {
        if (a.length != b.length)
		return undefined;
	var result = [];
	var rowLength = Math.sqrt(a.length);
	for (i = 0; i < a.length; i++) {
		var index = parseInt(i / rowLength);
		var val = 0;
		for (var x = 0; x < rowLength; x++) {
		val += a[index * rowLength + x] * b[x * rowLength + (i % rowLength)];
		}
		result[i] = val;
	}
	return result;
};
