// Function: FUN_01ee0640
// Address: 01ee0640
// Size: 550 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01ee0845) */
/* WARNING: Removing unreachable block (ram,0x01ee084e) */
/* WARNING: Removing unreachable block (ram,0x01ee070c) */
/* WARNING: Removing unreachable block (ram,0x01ee0715) */

void FUN_01ee0640(void)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  longlong local_40;
  char local_38;
  
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 1000))();
  if (cVar4 == '\0') {
    _CGContextGetInterpolationQuality();
    _CGContextSetInterpolationQuality();
  }
  if ((((*(longlong *)(unaff_RDI + 0x138) == 0) || (iVar1 = *(int *)(unaff_RDI + 0x140), iVar1 < 0))
      || (iVar5 = FUN_01eddbf0(), iVar5 <= iVar1)) ||
     (FUN_01eddbb0(extraout_XMM0_Da,*(undefined4 *)(unaff_RDI + 0x140)), local_40 == 0)) {
    bVar3 = true;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_01d48370();
    (**(code **)(*(longlong *)*unaff_RSI + 0x380))
              (*(undefined4 *)(unaff_RDI + 0x144),*(undefined4 *)(unaff_RDI + 0x144));
    FUN_01cfbee0(DAT_02390124,DAT_02390124,DAT_02390124);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    FUN_01ede0c0();
    (**(code **)(*plVar2 + 0x3b0))();
    FUN_01ede0c0();
    FUN_01ede160();
    FUN_01d48390();
    bVar3 = false;
  }
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 1000))();
  if (cVar4 == '\0') {
    _CGContextSetInterpolationQuality();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}


