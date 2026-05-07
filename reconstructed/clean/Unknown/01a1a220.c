// Function: FUN_01a1a220
// Address: 01a1a220
// Size: 1088 bytes
// Class: Unknown

uint64_t FUN_01a1a220(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  uint uVar11;
  uint64_t unaff_R14;
  int64_t lVar12;
  uint uVar13;
  uint32_t uVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  float fVar15;
  int64_t local_68;
  char local_60;
  uint32_t local_54;
  int64_t *local_50;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  if (*param_2 == 0) {
    uVar9 = 0;
    goto LAB_01a1a3b1;
  }
  uVar14 = FUN_01a58dc0();
  local_50 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar2 = true;
    bVar1 = false;
    local_50 = (int64_t *)0x0;
LAB_01a1a34d:
    local_68 = *param_2;
    local_60 = '\0';
    uVar11 = FUN_01a1b340(uVar14,&local_68);
    uVar9 = (uint64_t)uVar11;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar1) goto LAB_01a1a3b1;
  }
  else {
    plVar8 = local_40;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_50))();
    if (cVar4 == '\0') {
      bVar2 = false;
      uVar9 = 0;
    }
    else {
      iVar5 = FUN_01d3a5a0();
      bVar1 = true;
      uVar14 = extraout_XMM0_Da;
      if (((iVar5 != 1) || (iVar5 = FUN_01d3b630(), uVar14 = extraout_XMM0_Da_00, iVar5 != 1)) ||
         (iVar5 = FUN_01d3b620(), uVar14 = extraout_XMM0_Da_01, iVar5 != 2)) {
        bVar2 = false;
        goto LAB_01a1a34d;
      }
      (**(code **)(*local_50 + 0xe30))();
      plVar10 = local_40;
      if (local_40 == (int64_t *)0x0) {
        uVar14 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
        plVar10 = (int64_t *)0x0;
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          uVar14 = 0;
          if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01a1a3c8;
          FUN_00d50b20();
        }
        uVar14 = 0;
      }
LAB_01a1a3c8:
      if (0 < *(int *)((int64_t)plVar10 + 0xc)) {
        lVar12 = 0;
        uVar13 = 0;
        uVar11 = 0;
        local_54 = uVar14;
        do {
          pvVar6 = _pthread_getspecific((void*)plVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar15 = (float)FUN_0125eba0();
          local_44 = (float)-(uint)(fVar15 == g_02390124);
          param_2 = *(int64_t **)(plVar10[2] + lVar12 * 8);
          pvVar6 = _pthread_getspecific((void*)plVar8);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            param_2 = (int64_t *)param_2[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          fVar15 = (float)FUN_0125eba0();
          uVar14 = local_54;
          uVar11 = uVar11 - (int)local_44;
          uVar13 = uVar13 + (fVar15 == g_0239424c);
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)((int64_t)plVar10 + 0xc));
        local_44 = 0.0;
        if (uVar11 <= uVar13) {
          local_44 = g_02390124;
        }
        if (0 < *(int *)((int64_t)plVar10 + 0xc)) {
          lVar12 = 0;
          do {
            pvVar6 = _pthread_getspecific((void*)plVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125eb40(local_44);
            pvVar6 = _pthread_getspecific((void*)plVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            param_2 = local_40;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (param_2 != (int64_t *)0x0) {
              pvVar6 = _pthread_getspecific((void*)plVar8);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              param_2 = local_40;
              pvVar6 = _pthread_getspecific((void*)plVar8);
              plVar3 = local_40;
              if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), param_2 = plVar3, lVar7 != 0))
              {
                param_2 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              FUN_0152dfb0();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)((int64_t)plVar10 + 0xc));
        }
      }
      if ((char)uVar14 == '\0') {
        FUN_00d50b20();
      }
      bVar2 = false;
      uVar9 = CONCAT71((int7)((uint64_t)param_2 >> 8),1);
    }
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
LAB_01a1a3b1:
  return uVar9 & 0xffffffff;
}

