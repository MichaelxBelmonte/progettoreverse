// Function: FUN_00e191b0
// Address: 00e191b0
// Size: 501 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00e19330) */
/* WARNING: Removing unreachable block (ram,0x00e19339) */

void FUN_00e191b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  longlong local_58;
  char local_50;
  
  lVar4 = *(longlong *)(unaff_RSI + 0x10);
  if (*(longlong *)(lVar4 + 0x30) != 0) {
    _CFRelease();
    lVar4 = *(longlong *)(unaff_RSI + 0x10);
    *(undefined8 *)(lVar4 + 0x30) = 0;
  }
  if (*(longlong *)(lVar4 + 0x38) != 0) {
    FUN_00d50b20();
    *(undefined8 *)(*(longlong *)(unaff_RSI + 0x10) + 0x38) = 0;
  }
  _CFDataCreateWithBytesNoCopy
            (*(undefined8 *)PTR__kCFAllocatorNull_024a98e0,(longlong)*(int *)(*param_2 + 0x18));
  iVar2 = _CFMessagePortSendRequest(0,param_1,*(longlong *)(unaff_RSI + 0x10) + 0x30);
  _CFRelease();
  lVar1 = DAT_02785488;
  lVar4 = DAT_02785480;
  if (iVar2 + 4U < 2) {
    if (DAT_02785488 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else if (iVar2 + 2U < 2) {
    if (DAT_02785480 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(*(longlong *)(unaff_RSI + 0x10) + 0x30) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    _CFDataGetBytePtr();
    uVar3 = _CFDataGetLength();
    FUN_00c8e480(extraout_XMM0_Da,uVar3);
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00d50b00();
    *(longlong *)(*(longlong *)(unaff_RSI + 0x10) + 0x38) = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_58 == 0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *unaff_RDI = local_58;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
    }
  }
  return;
}


