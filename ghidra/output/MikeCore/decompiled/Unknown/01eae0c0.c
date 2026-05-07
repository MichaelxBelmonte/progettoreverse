// Function: FUN_01eae0c0
// Address: 01eae0c0
// Size: 506 bytes
// Class: Unknown


undefined8 FUN_01eae0c0(void)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  longlong local_50;
  char local_48;
  
  uVar3 = _CGPathCreateMutable();
  FUN_01d38ea0();
  uVar1 = *(uint *)(local_50 + 0x18);
  if (local_48 != '\0') {
    FUN_00d50b20();
  }
  if (0x1b < (int)uVar1) {
    lVar4 = 0;
    do {
      FUN_01d38ea0();
      lVar2 = *(longlong *)(local_50 + 0x10);
      if (local_48 != '\0') {
        FUN_00d50b20();
      }
      switch(*(undefined4 *)(lVar2 + lVar4)) {
      case 0:
        _CGPathMoveToPoint((double)*(float *)(lVar2 + 4 + lVar4),
                           (double)*(float *)(lVar2 + 8 + lVar4));
        break;
      case 1:
        _CGPathAddLineToPoint
                  ((double)*(float *)(lVar2 + 4 + lVar4),(double)*(float *)(lVar2 + 8 + lVar4));
        break;
      case 2:
        _CGPathAddCurveToPoint
                  ((double)*(float *)(lVar2 + 4 + lVar4),(double)*(float *)(lVar2 + 8 + lVar4),
                   (double)*(float *)(lVar2 + 0xc + lVar4),(double)*(float *)(lVar2 + 0x10 + lVar4))
        ;
        break;
      case 3:
        fVar5 = (float)FUN_00d05600(*(undefined4 *)(lVar2 + 0x10 + lVar4));
        FUN_00d05600(*(undefined4 *)(lVar2 + 0x14 + lVar4));
        _CGPathAddArc((double)*(float *)(lVar2 + 4 + lVar4),(double)*(float *)(lVar2 + 8 + lVar4),
                      (double)*(float *)(lVar2 + 0xc + lVar4),(double)fVar5);
        break;
      case 4:
        _CGPathCloseSubpath();
      }
      lVar4 = lVar4 + 0x1c;
    } while (((ulonglong)(uVar1 >> 2) / 7) * 0x1c != lVar4);
  }
  return uVar3;
}


