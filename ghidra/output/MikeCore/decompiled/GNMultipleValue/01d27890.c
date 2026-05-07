// Function: FUN_01d27890
// Address: 01d27890
// Size: 2002 bytes
// Class: GNMultipleValue


void FUN_01d27890(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  char local_5c;
  longlong *local_58;
  longlong *local_48;
  char local_40 [8];
  char local_38 [7];
  char local_31;
  
  FUN_01d28610();
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = FUN_00d8ca50();
  lVar3 = DAT_02774da0;
  if (cVar4 == '\0') {
    local_58 = (longlong *)*param_1;
    if (local_58 == (longlong *)0x0) {
      local_31 = '\x01';
      local_58 = (longlong *)0x0;
    }
    else {
      local_31 = (char)param_1[1];
      if (local_31 != '\0') {
        FUN_00d50b00();
      }
    }
    bVar2 = false;
    plVar8 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    if (DAT_02774da0 != 0) {
      FUN_00d50b00();
    }
    local_190 = lVar3;
    local_188 = '\x01';
    FUN_00d91000(1,&local_190);
    if (local_48 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      bVar2 = false;
    }
    else {
      plVar8 = local_48;
      if (local_40[0] == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        bVar2 = true;
      }
    }
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23340();
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = local_48;
    if (local_48 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
    }
    else if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
    FUN_00d23740();
    local_170 = DAT_02774da0;
    local_178 = '\0';
    local_180 = plVar8;
    if (DAT_02774da0 != 0) {
      FUN_00d50b00();
    }
    local_168 = '\x01';
    FUN_00d95130();
    if (local_48 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = local_48;
      if (local_40[0] == '\0') {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_31 = '\x01';
  }
  plVar7 = *(longlong **)(unaff_RDI + 0x40);
  if (plVar7 == (longlong *)0x0) {
LAB_01d27c27:
    if (plVar6 == (longlong *)0x0) {
      plVar7 = (longlong *)*param_2;
      if (plVar7 == (longlong *)0x0) goto LAB_01d27c9d;
      cVar4 = (char)param_2[1];
      if (cVar4 != '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_128 = '\0';
      local_130 = plVar6;
      (**(code **)(*(longlong *)*param_2 + 0x98))();
      if (local_48 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        cVar4 = '\0';
      }
      else {
        plVar7 = local_48;
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          cVar4 = '\x01';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
          cVar4 = '\x01';
        }
      }
      if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      if (*(longlong *)(unaff_RDI + 0x40) == 0) {
        local_120 = local_58;
        local_118 = '\0';
        (**(code **)(*plVar7 + 0x88))();
        if (local_40[0] == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar1 = (longlong *)*unaff_RSI;
        if (local_48 == (longlong *)0x0) {
          if (plVar1 == (longlong *)0x0) goto joined_r0x01d27fa1;
        }
        else {
          if (plVar1 == (longlong *)0x0) {
            local_5c = '\0';
          }
          else {
            local_110 = local_48;
            local_108 = '\0';
            local_5c = (**(code **)(*plVar1 + 0x50))();
            if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          if (local_5c != '\0') goto joined_r0x01d27fa1;
        }
      }
      local_100 = *unaff_RSI;
      local_f8 = '\0';
      local_f0 = local_58;
      local_e8 = '\0';
      (**(code **)(*plVar7 + 0x80))();
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    local_160 = *param_2;
    local_158 = '\0';
    local_150 = *param_1;
    local_148 = '\0';
    local_140 = *unaff_RSI;
    local_138 = '\0';
    cVar4 = (**(code **)(*plVar7 + 0x20))(&local_150,&local_160,&local_140);
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_01d27c27;
LAB_01d27c9d:
    cVar4 = '\0';
    plVar7 = (longlong *)0x0;
  }
  if (local_48 == (longlong *)0x0) {
    if (*param_1 == 0) {
      FUN_01d2b270();
    }
    else {
      local_40[0] = '\0';
      FUN_01d2e5e0();
    }
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x40);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
    local_e0 = *param_2;
    local_d8 = '\0';
    local_d0 = *param_1;
    local_c8 = '\0';
    local_c0 = *unaff_RSI;
    local_b8 = '\0';
    (**(code **)(*plVar1 + 0x48))(&local_d0,&local_e0,&local_c0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
joined_r0x01d27fa1:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


