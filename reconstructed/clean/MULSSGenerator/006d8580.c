// Function: FUN_006d8580
// Address: 006d8580
// Size: 1553 bytes
// Class: MULSSGenerator

uint64_t FUN_006d8580(uint64_t param_1,char param_2)

{
  int iVar1;
  void* pVar2;
  uint64_t uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  char cVar8;
  void *pvVar9;
  int64_t lVar10;
  void* pVar11;
  int64_t lVar12;
  int64_t lVar13;
  undefined7 uVar15;
  uint64_t uVar14;
  uint64_t this_ptr;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  int64_t local_b8;
  char local_b0;
  int64_t local_60;
  char local_58;
  int local_48;
  
  FUN_006cb500();
  uVar15 = (undefined7)((uint64_t)this_ptr >> 8);
  if (local_b8 == 0) {
    uVar14 = CONCAT71(uVar15,1);
    goto LAB_006d8bca;
  }
  FUN_006cb500();
  iVar1 = *(int *)(local_60 + 0xc);
  uVar14 = CONCAT71(uVar15,iVar1 == 0);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if (local_b0 != '\0') {
    FUN_00d50b20();
  }
  if ((iVar1 == 0) || (param_2 == '\0')) goto LAB_006d8bca;
  FUN_006cb500();
  if (local_b0 == '\0') {
    if (local_b8 != 0) {
      FUN_00d50b00();
      goto LAB_006d8643;
    }
  }
  else if (local_b8 != 0) {
LAB_006d8643:
    if (0 < *(int *)(local_b8 + 0xc)) {
      uVar16 = 0;
      do {
        lVar13 = local_60;
        uVar3 = *(void*)(*(int64_t *)(local_b8 + 0x10) + (uint64_t)uVar16 * 8);
        pVar11 = uVar16;
        pvVar9 = _pthread_getspecific(uVar16);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
            goto LAB_006d8750;
          }
        }
        else if (local_60 != 0) {
LAB_006d8750:
          pvVar9 = _pthread_getspecific(pVar11);
          pVar2 = (void*)local_60;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = pVar2;
          }
          fVar17 = (float)FUN_012c6a80();
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = pVar2;
          }
          fVar18 = (float)FUN_012c6af0();
          dVar7 = g_023b67d8;
          dVar20 = (double)fVar17;
          bVar4 = dVar20 < g_023b67e0;
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = pVar2;
          }
          FUN_012c6a20(0);
          cVar8 = FUN_006cff00();
          if (cVar8 == '\0') {
            pvVar9 = _pthread_getspecific(pVar11);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar11 = pVar2;
            }
            FUN_012c6a90(0);
          }
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = (void*)uVar3;
          }
          FUN_012e5ae0();
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              goto LAB_006d8918;
            }
          }
          else if (local_60 != 0) {
LAB_006d8918:
            bVar5 = (double)fVar18 < g_023b67e0;
            bVar6 = g_023b67d8 < (double)fVar18;
            local_58 = '\0';
            local_60 = 0;
            local_48 = -1;
            while( true ) {
              lVar10 = (int64_t)local_48;
              local_48 = local_48 + 1;
              if (*(int *)(lVar13 + 0xc) <= local_48) break;
              lVar12 = *(int64_t *)(lVar13 + 0x10);
              local_60 = *(int64_t *)(lVar12 + 8 + lVar10 * 8);
              cVar8 = FUN_006cff00();
              pVar11 = (void*)lVar12;
              if (cVar8 == '\0' && (bVar6 || bVar5)) {
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar19 = (float)FUN_01265b70();
                FUN_01259600(fVar19 + fVar18);
              }
              if (dVar7 < dVar20 || bVar4) {
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar19 = (float)FUN_0125a2c0();
                FUN_0125a580(fVar19 + fVar17);
              }
            }
            FUN_001159b0();
            pVar11 = (void*)lVar13;
            FUN_00d50b20();
          }
          if (dVar7 < dVar20 || bVar4) {
            pvVar9 = _pthread_getspecific(pVar11);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_012879b0();
            if (local_60 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(local_b8 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  uVar14 = 0;
LAB_006d8bca:
  return (uVar14 ^ 1) & 0xffffffff;
}

