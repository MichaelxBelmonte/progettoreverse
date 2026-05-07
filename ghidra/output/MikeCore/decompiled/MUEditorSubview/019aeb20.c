// Function: FUN_019aeb20
// Address: 019aeb20
// Size: 592 bytes
// Class: MUEditorSubview


void FUN_019aeb20(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  undefined8 unaff_R14;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong lVar6;
  undefined1 local_90 [16];
  undefined1 local_80 [8];
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  char local_40;
  undefined8 local_38;
  
  if (*unaff_RSI == 0) {
    if (*(char *)((longlong)unaff_RDI + 0x35c) == '\0') {
      return;
    }
    (**(code **)(*unaff_RDI + 0xce0))(DAT_023b3490,unaff_RDI + 0x6e);
    *(undefined1 *)((longlong)unaff_RDI + 0x35c) = 0;
    return;
  }
  uVar2 = (**(code **)(*unaff_RDI + 0xe20))();
  lVar3 = local_48;
  local_58 = local_48;
  uVar5 = (undefined7)((ulonglong)unaff_R14 >> 8);
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019aebc5;
    }
LAB_019aec25:
    local_38 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  else {
    if (local_48 == 0) goto LAB_019aec25;
LAB_019aebc5:
    if (*(int *)(lVar3 + 0xc) != 0) {
      if (*unaff_RSI != 0) {
        local_40 = '\0';
        local_48 = *unaff_RSI;
        cVar1 = FUN_00d24090();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = local_58;
        if (cVar1 == '\0') goto LAB_019aec29;
      }
      uVar4 = CONCAT71(uVar5,1);
      local_38 = 0;
      local_50 = 0;
      FUN_00d50b00();
      goto LAB_019aec97;
    }
LAB_019aec29:
    local_38 = 0;
  }
  local_78 = *unaff_RSI;
  local_70 = '\0';
  FUN_0039e8b0();
  lVar3 = local_48;
  if (local_48 == 0) {
    uVar4 = 0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    uVar4 = CONCAT71(uVar5,1);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
    uVar4 = CONCAT71(uVar5,1);
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_019aec97:
  local_50 = uVar4 & 0xffffffff;
  if (*(char *)((longlong)unaff_RDI + 0x35c) == '\0') {
    *(undefined1 *)((longlong)unaff_RDI + 0x35c) = 1;
    lVar6 = (**(code **)(*unaff_RDI + 0xa50))();
    unaff_RDI[0x6c] = lVar6;
    unaff_RDI[0x6d] = param_2;
    lVar6 = (**(code **)(*unaff_RDI + 0xa98))();
    unaff_RDI[0x6e] = lVar6;
  }
  local_60 = '\0';
  local_68 = lVar3;
  (**(code **)(*unaff_RDI + 0xca8))(local_80,local_90);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0xce0))(DAT_023b3490,local_80);
  if ((char)local_38 == '\0') {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return;
}


