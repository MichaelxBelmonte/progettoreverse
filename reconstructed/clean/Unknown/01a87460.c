// Function: FUN_01a87460
// Address: 01a87460
// Size: 1169 bytes
// Class: Unknown

void* FUN_01a87460(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  double dVar2;
  code *pcVar3;
  int64_t *plVar4;
  char cVar5;
  void *pvVar6;
  void*puVar7;
  uint64_t uVar8;
  int iVar9;
  void* pVar10;
  int64_t *plVar11;
  void*this_ptr;
  int64_t lVar12;
  float fVar13;
  uint32_t uVar14;
  float fVar15;
  float extraout_XMM0_Da;
  float fVar16;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float fVar17;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  int64_t local_f0;
  char local_e8;
  int64_t local_a8;
  char local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  double local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  uint64_t local_50;
  int64_t *local_48;
  void*local_40;
  int64_t *local_38;
  
  fStack_94 = (float)((uint64_t)param_2 >> 0x20);
  fVar17 = (float)param_2;
  fVar16 = (float)((uint64_t)param_1 >> 0x20);
  fVar13 = (float)param_1;
  local_98 = fVar17;
  fStack_90 = in_XMM1_Dc;
  fStack_8c = in_XMM1_Dd;
  uVar14 = FUN_01e3f820();
  fVar15 = fStack_94;
  cVar5 = FUN_00d054a0(fVar13,local_98,uVar14,fVar17);
  if (cVar5 != '\0') {
    FUN_01e3f820();
    if (fVar16 <= fVar15 * g_0239011c) {
      local_98 = local_98 + fVar13;
      fStack_94 = fStack_94 + fVar16;
      fStack_90 = fStack_90 + in_XMM0_Dc;
      fStack_8c = fStack_8c + in_XMM0_Dd;
      if (fVar15 * g_0239011c <= fStack_94 + g_02390d00) {
        FUN_01a82280();
        plVar11 = local_78;
        if (local_70 == '\0') {
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01a87554;
          }
        }
        else if (local_78 != (int64_t *)0x0) {
LAB_01a87554:
          FUN_01989f80();
          plVar4 = local_78;
          if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pcVar3 = g_02572370;
          local_48 = plVar4;
          local_70 = 0;
          local_78 = (int64_t *)0x0;
          local_68 = plVar11;
          local_58 = 0;
          local_60 = 0;
          iVar9 = *(int *)((int64_t)plVar11 + 0xc);
          if (iVar9 < 1) {
            local_50 = 0;
            local_40 = (void*)0x0;
          }
          else {
            local_98 = local_98 + g_02390d00;
            lVar12 = 0;
            local_40 = (void*)0x0;
            local_50 = 0;
            local_38 = plVar11;
            do {
              lVar1 = *(int64_t *)(plVar11[2] + lVar12 * 8);
              plVar11 = local_38;
              local_78 = (int64_t *)lVar1;
              if ((local_58 != 0 || (void*)lVar12 != 0) &&
                 (pVar10 = iVar9 - 1, (void*)lVar12 != pVar10)) {
                pvVar6 = _pthread_getspecific(pVar10);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar6 = _pthread_getspecific(pVar10);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013faed0();
                local_80 = (double)FUN_0128e5a0();
                pvVar6 = _pthread_getspecific(pVar10);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar2 = (double)FUN_0125a280();
                uVar14 = (**(code **)(*local_48 + 0x938))(SUB84(local_80 + dVar2,0));
                local_80 = (double)CONCAT44(local_80._4_4_,uVar14);
                pvVar6 = _pthread_getspecific(pVar10);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a280();
                fVar15 = (float)(**(code **)(*local_48 + 0x938))();
                plVar11 = local_38;
                if ((fVar13 < local_80._0_4_ - fVar15) && (local_80._0_4_ - fVar15 < local_98)) {
                  fVar15 = local_98;
                  if (local_40 == (void*)0x0) {
                    puVar7 = (void*)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *puVar7 = &g_02572358;
                    uVar8 = (*pcVar3)();
                    local_50 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                    fVar15 = extraout_XMM0_Da;
                    local_40 = puVar7;
                  }
                  local_a0 = '\0';
                  local_a8 = lVar1;
                  FUN_01a82870(fVar15,&local_a8);
                  plVar11 = local_38;
                  if (local_e8 == '\0') {
                    if (local_f0 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_e8 = '\0';
                  }
                  FUN_00d21140();
                  if (local_f0 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_a0 != '\0') && (local_a8 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              lVar12 = lVar12 + 1;
              local_60 = CONCAT44(local_60._4_4_,(int)lVar12);
              iVar9 = *(int *)((int64_t)plVar11 + 0xc);
            } while ((int)lVar12 < iVar9);
          }
          FUN_01a81420();
          puVar7 = local_40;
          *(void*)(this_ptr + 1) = 0;
          if (((char)local_50 == '\0') && (local_40 != (void*)0x0)) {
            FUN_00d50b00();
          }
          *this_ptr = puVar7;
          *(void*)(this_ptr + 1) = 1;
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          return this_ptr;
        }
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

