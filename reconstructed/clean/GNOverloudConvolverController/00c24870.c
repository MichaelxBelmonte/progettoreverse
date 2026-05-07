// Function: FUN_00c24870
// Address: 00c24870
// Size: 1292 bytes
// Class: GNOverloudConvolverController

uint64_t FUN_00c24870(void*param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  void*puVar5;
  uint64_t uVar6;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_0276ca60;
  puVar5 = param_1;
  if (g_0276ca60 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar1;
  local_e0 = '\x01';
  cVar2 = FUN_00d90870();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0276ca68;
  uVar6 = CONCAT71((int7)((uint64_t)puVar5 >> 8),1);
  if (cVar2 == '\0') {
    if (g_0276ca68 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar1;
    local_d0 = '\x01';
    cVar2 = FUN_00d90870();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_0276ca70;
    if (cVar2 == '\0') {
      if (g_0276ca70 != 0) {
        FUN_00d50b00();
      }
      local_c8 = lVar1;
      local_c0 = '\x01';
      cVar2 = FUN_00d90870();
      uVar7 = extraout_XMM0_Qa;
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        uVar7 = FUN_00d50b20();
      }
      lVar1 = g_0276ca78;
      if (cVar2 == '\0') {
        if (g_0276ca78 != 0) {
          FUN_00d50b00();
        }
        local_b8 = lVar1;
        local_b0 = '\x01';
        cVar2 = FUN_00d90870();
        uVar7 = extraout_XMM0_Qa_00;
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          uVar7 = FUN_00d50b20();
        }
        lVar1 = g_0276ca18;
        if (cVar2 == '\0') {
          if (g_0276ca18 != 0) {
            FUN_00d50b00();
          }
          local_a8 = lVar1;
          local_a0 = '\x01';
          cVar2 = FUN_00d90870();
          uVar7 = extraout_XMM0_Qa_01;
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            uVar7 = FUN_00d50b20();
          }
          lVar1 = g_0276be50;
          if (cVar2 == '\0') {
            if (g_0276be50 != 0) {
              FUN_00d50b00();
            }
            local_98 = lVar1;
            local_90 = '\x01';
            cVar2 = FUN_00d90870();
            uVar7 = extraout_XMM0_Qa_02;
            if ((local_90 != '\0') && (local_98 != 0)) {
              uVar7 = FUN_00d50b20();
            }
            if (cVar2 == '\0') {
              local_f8 = *param_1;
              local_f0 = 0;
              uVar4 = FUN_00c25040(&local_f8);
              uVar6 = (uint64_t)uVar4;
              goto LAB_00c24d68;
            }
            lVar1 = *param_2;
            FUN_00d8f140(uVar7,5);
            local_58 = local_40;
            local_50 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_50 = '\x01';
            iVar3 = FUN_00c716c0();
            local_48 = -(uint64_t)
                        (*(double *)
                          (*(int64_t *)
                            (*(int64_t *)(*(int64_t *)(lVar1 + 200) + 0x10) + (int64_t)iVar3 * 8)
                          + 0x20) != 0.0);
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar1 = *param_2;
            FUN_00d8f140(uVar7,0xe);
            local_68 = local_40;
            local_60 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_60 = '\x01';
            iVar3 = FUN_00c716c0();
            local_48 = -(uint64_t)
                        (*(double *)
                          (*(int64_t *)
                            (*(int64_t *)(*(int64_t *)(lVar1 + 200) + 0x10) + (int64_t)iVar3 * 8)
                          + 0x20) != 0.0);
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          lVar1 = *param_2;
          FUN_00d8f140(uVar7,7);
          local_78 = local_40;
          local_70 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_70 = '\x01';
          iVar3 = FUN_00c716c0();
          local_48 = -(uint64_t)
                      (*(double *)
                        (*(int64_t *)
                          (*(int64_t *)(*(int64_t *)(lVar1 + 200) + 0x10) + (int64_t)iVar3 * 8) +
                        0x20) != 0.0);
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        lVar1 = *param_2;
        FUN_00d8f140(uVar7,6);
        local_88 = local_40;
        local_80 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_80 = '\x01';
        iVar3 = FUN_00c716c0();
        local_48 = -(uint64_t)
                    (*(double *)
                      (*(int64_t *)
                        (*(int64_t *)(*(int64_t *)(lVar1 + 200) + 0x10) + (int64_t)iVar3 * 8) +
                      0x20) != 0.0);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      uVar6 = (uint64_t)((uint)local_48 & 1);
    }
    else {
      uVar6 = 0;
    }
  }
LAB_00c24d68:
  return uVar6 & 0xffffffff;
}

