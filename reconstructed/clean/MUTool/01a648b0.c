// Function: FUN_01a648b0
// Address: 01a648b0
// Size: 1450 bytes
// Class: MUTool

uint64_t FUN_01a648b0(uint64_t param_1,float param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *arg1;
  bool bVar8;
  float fVar9;
  float fVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar12;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t uStack_80;
  int64_t local_78;
  char local_70;
  uint32_t local_64;
  int64_t *local_60;
  int local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint local_4c;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  FUN_01a58dc0();
  local_38 = local_48;
  if (local_48 == (int64_t *)0x0) {
    local_50 = 1;
    local_38 = (int64_t *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_50 = 0;
      if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01a64927;
      FUN_00d50b20();
    }
    local_50 = 0;
  }
LAB_01a64927:
  (**(code **)(*local_38 + 0x7b0))();
  local_60 = local_48;
  plVar7 = local_48;
  if (local_48 == (int64_t *)0x0) {
    local_54 = 1;
    local_60 = (int64_t *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01a64986;
      FUN_00d50b20();
    }
    local_54 = 0;
  }
LAB_01a64986:
  local_58 = 0;
  FUN_01cf74c0();
  bVar8 = true;
  local_64 = 0;
  local_90 = 0;
  local_88._0_4_ = 0.0;
  local_88._4_4_ = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (*arg1 == 0) {
    local_4c = 0;
LAB_01a64a70:
    do {
      do {
        (**(code **)(*local_38 + 0x658))();
        plVar3 = local_48;
        plVar1 = (int64_t *)*arg1;
        if (plVar1 == local_48) {
          if (((char)arg1[1] == '\0') && (local_48 != (int64_t *)0x0)) {
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_01a64b1c;
            }
            goto LAB_01a64ad3;
          }
LAB_01a64add:
          fVar12 = param_2;
          if (*arg1 != 0) goto LAB_01a64b2f;
LAB_01a64c68:
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a64c7c:
          local_a0 = *arg1;
          local_98 = '\0';
          FUN_0199eb40();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01a64cb8;
        }
        lVar2 = arg1[1];
        if (local_40 != '\0') {
          *arg1 = (int64_t)local_48;
          if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a64ad3:
          *(void*)(arg1 + 1) = 1;
          local_40 = '\0';
          goto LAB_01a64add;
        }
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar3;
        if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a64b1c:
        *(void*)(arg1 + 1) = 1;
        fVar12 = param_2;
        if (*arg1 == 0) goto LAB_01a64c68;
LAB_01a64b2f:
        iVar4 = FUN_01d3a5a0();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar4 == 6) goto LAB_01a64c7c;
        iVar4 = FUN_01d3a5a0();
        if (iVar4 == 5) {
          param_2 = fVar12;
          if (!bVar8) {
            fVar9 = (float)FUN_01e436c0();
            FUN_01d3abf0();
            fVar10 = (float)FUN_01e466c0();
            param_2 = (float)local_88;
            if ((((fVar9 <= (float)local_88) &&
                 (param_2 = fVar9 + fVar12, (float)local_88 <= param_2)) && (fVar9 <= fVar10)) &&
               (fVar10 <= param_2)) {
              param_2 = (float)local_90;
              (**(code **)(*local_38 + 0xc60))(fVar10 - (float)local_88,param_2,local_64);
            }
          }
          FUN_01d3abf0();
          uVar6 = FUN_01e466c0();
          uStack_80 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
          bVar8 = false;
          local_88 = uVar6;
          if ((local_4c & 1) == 0) {
            local_90 = (**(code **)(*local_38 + 0x930))((int)uVar6);
            plVar7 = (int64_t *)CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
            local_4c = (uint)plVar7;
            bVar8 = false;
            local_64 = (**(code **)(*local_38 + 0xc00))(local_88._4_4_);
          }
          goto LAB_01a64a70;
        }
        iVar4 = FUN_01d3a5a0();
        bVar8 = false;
        param_2 = fVar12;
      } while (iVar4 != 4);
      iVar4 = FUN_01d3b590();
      bVar8 = false;
      param_2 = fVar12;
    } while (iVar4 == local_58);
    FUN_01cf74c0();
    uVar5 = FUN_01d3b590();
    plVar7 = local_38;
    if ((uVar5 & 8) == 0) {
      local_70 = 0;
      lVar2 = local_38[0x83];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_78 = lVar2;
      uVar11 = (**(code **)(*plVar7 + 0xed8))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      local_b0 = 0;
      local_a8 = '\0';
      (**(code **)(*(int64_t *)plVar7[0x83] + 0x380))(uVar11,&local_b0);
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    iVar4 = FUN_01d3a5a0();
    if (iVar4 == 1) {
      iVar4 = FUN_01d3b630();
      if (iVar4 == 1) {
        if (*arg1 != 0) {
          iVar4 = FUN_01d3b620();
          plVar1 = local_38;
          if (iVar4 == 2) {
            FUN_01a58dc0();
            (**(code **)(*local_48 + 0xcc0))();
            local_88 = CONCAT44(local_88._4_4_,(float)local_88);
            if ((local_40 != '\0') &&
               (local_88 = CONCAT44(local_88._4_4_,(float)local_88), local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01a64cc6;
          }
          if (*arg1 != 0) {
            FUN_01d3abf0();
            local_88 = FUN_01e466c0();
            uStack_80 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
            local_90 = (**(code **)(*plVar1 + 0x930))();
            uVar6 = (**(code **)(*local_38 + 0xc00))(local_88._4_4_);
            local_4c = (uint)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
            local_64 = extraout_XMM0_Da;
            if (*arg1 == 0) {
              bVar8 = false;
              local_58 = 0;
            }
            else {
              local_58 = FUN_01d3b590();
              bVar8 = false;
            }
            goto LAB_01a64a70;
          }
        }
        local_4c = 0;
        local_58 = 0;
        goto LAB_01a64a70;
      }
    }
LAB_01a64cb8:
    FUN_01cf74c0();
  }
LAB_01a64cc6:
  if ((char)local_54 == '\0' && local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_50 == '\0') {
    FUN_00d50b20();
  }
  return 1;
}

