// Function: FUN_0039bb90
// Address: 0039bb90
// Size: 528 bytes
// Class: MDEditorViewController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0039bb90(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  double dVar6;
  undefined8 uVar7;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_0034cc20();
  *puVar3 = &DAT_024edac8;
  puVar3[2] = &DAT_024ee4c0;
  puVar3[0x27] = &DAT_024ee500;
  puVar3[0x2d] = &DAT_024ee530;
  puVar3[0x2e] = &DAT_024ee580;
  *(undefined1 *)(puVar3 + 0x3f) = 0;
  FUN_00d500e0();
  cVar2 = (**(code **)(&DAT_00001680 + *unaff_RSI))();
  local_48 = DAT_026f6de0;
  if (cVar2 == '\0') {
    if (DAT_026f6de0 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar4 = (ulonglong)(dVar6 * DAT_023907c0);
    uVar4 = (longlong)(dVar6 * DAT_023907c0 - _DAT_023907c8) & (longlong)uVar4 >> 0x3f | uVar4;
    uVar7 = FUN_0071a120();
    if ((local_38 == '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    bVar5 = (char)uVar4 + (char)(uVar4 / 3) * -3;
    local_58 = local_48;
    local_50 = '\0';
    FUN_000175c0(uVar7,&local_58);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      local_38 = '\0';
      local_40 = lVar1;
      bVar5 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    *(byte *)(puVar3 + 0x3f) = lVar1 != 0 & bVar5;
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(undefined1 *)(puVar3 + 0x3f) = 0;
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


