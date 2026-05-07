// Function: FUN_01d29010
// Address: 01d29010
// Size: 1313 bytes
// Class: GNMultipleValue


ulonglong FUN_01d29010(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong *local_50;
  longlong local_48;
  char local_40 [15];
  char local_31;
  
  plVar5 = *(longlong **)(unaff_RDI + 0x40);
  if (plVar5 == (longlong *)0x0) {
LAB_01d290e6:
    cVar3 = FUN_00d8ca50();
    lVar1 = DAT_02774da0;
    if (cVar3 != '\0') {
      if (DAT_02774da0 != 0) {
        FUN_00d50b00();
      }
      local_d0 = lVar1;
      local_c8 = '\x01';
      FUN_00d91000(1,&local_d0);
      if (local_40[0] == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      pcVar6 = &local_70;
      if (local_40[0] != '\0') {
        pcVar6 = local_40;
      }
      local_70 = local_40[0];
      *pcVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *param_2;
      if (lVar1 == local_48) {
        if (((char)param_2[1] == '\0') && (local_48 != 0)) {
          if (local_70 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_01d2926a;
        }
        if ((local_70 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar2 = param_2[1];
        if (local_70 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *param_2 = local_48;
          if (((char)lVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          *param_2 = local_48;
          if (((char)lVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_01d2926a:
        local_50 = param_2 + 1;
        *(undefined1 *)local_50 = 1;
      }
      FUN_00d23740();
      if (*(int *)(local_48 + 0xc) != 0) {
        local_c0 = local_48;
        local_b8 = '\0';
        (**(code **)(*(longlong *)*unaff_RSI + 0xa0))();
        lVar1 = *unaff_RSI;
        if (lVar1 == local_48) {
          if (((char)unaff_RSI[1] == '\0') && (local_48 != 0)) {
            if (local_40[0] != '\0') goto LAB_01d29390;
            FUN_00d50b00();
            goto LAB_01d2936f;
          }
LAB_01d29373:
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          cVar3 = (char)unaff_RSI[1];
          if (local_40[0] == '\0') {
            local_31 = cVar3;
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            *unaff_RSI = local_48;
            if ((local_31 != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
LAB_01d2936f:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            goto LAB_01d29373;
          }
          *unaff_RSI = local_48;
          if ((cVar3 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
LAB_01d29390:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_40[0] = '\0';
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (*unaff_RSI != 0) {
      FUN_00d4efa0();
      local_b0 = *param_2;
      local_a8 = '\0';
      FUN_00c841b0();
      if (local_40[0] == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
      plVar5 = *(longlong **)(unaff_RDI + 0x60);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_00cafdf0();
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01d29496;
        }
        uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      }
      else {
        FUN_00d50b00();
LAB_01d29496:
        local_a0 = *unaff_RSI;
        local_98 = '\0';
        local_90 = local_48;
        local_88 = '\0';
        uVar4 = (**(code **)(*plVar5 + 0x438))();
        uVar7 = (ulonglong)uVar4;
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01d29514;
    }
  }
  else {
    FUN_00d50b00();
    local_f0 = *unaff_RSI;
    local_e8 = '\0';
    local_e0 = *param_2;
    local_d8 = '\0';
    cVar3 = (**(code **)(*plVar5 + 0x90))(&local_e0,&local_f0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') goto LAB_01d290e6;
  }
  uVar7 = 0;
LAB_01d29514:
  return uVar7 & 0xffffffff;
}


