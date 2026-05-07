// Function: FUN_0129aeb0
// Address: 0129aeb0
// Size: 1388 bytes
// Class: MUAudioSourcePrincipalItem

int64_t * FUN_0129aeb0(void* param_1)

{
  int iVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  uint uVar7;
  void* pVar8;
  int64_t lVar9;
  int64_t arg1;
  int64_t *this_ptr;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint64_t uVar14;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_58;
  char local_50;
  int local_40;
  
  if ((*(int64_t *)(arg1 + 0x100) != 0) && (cVar4 = FUN_0129ac30(), cVar4 != '\0')) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_012f7cb0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_012f7d90();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f4d80();
    if (local_98 == '\0') {
      if (local_a0 == 0) goto LAB_0129b427;
      FUN_00d50b00();
    }
    else if (local_a0 == 0) goto LAB_0129b427;
    if (0 < *(int *)(local_a0 + 0xc)) {
      uVar10 = 0;
      do {
        lVar3 = local_58;
        if (*(int64_t *)(*(int64_t *)(local_a0 + 0x10) + (uint64_t)uVar10 * 8) !=
            *(int64_t *)(arg1 + 0x100)) {
          uVar7 = uVar10;
          pvVar5 = _pthread_getspecific(uVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar13 = (double)FUN_012f7cb0();
          if ((double)((uint64_t)(dVar13 - (dVar11 + dVar12)) & g_023908f0) < g_02391038) {
            pvVar5 = _pthread_getspecific(uVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar5 = _pthread_getspecific(uVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_012f7cb0();
            FUN_012e9900(uVar14,g_023934c8);
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
                goto LAB_0129b1d1;
              }
            }
            else if (local_58 != 0) {
LAB_0129b1d1:
              local_58 = 0;
              local_40 = -1;
              do {
                lVar6 = (int64_t)local_40;
                local_40 = local_40 + 1;
                iVar1 = *(int *)(lVar3 + 0xc);
                if (iVar1 <= local_40) goto LAB_0129b3de;
                lVar9 = *(int64_t *)(lVar3 + 0x10);
                local_58 = *(int64_t *)(lVar9 + 8 + lVar6 * 8);
                FUN_0125e7c0();
                pVar8 = (void*)lVar9;
                if (local_d0 == 0) {
                  cVar4 = '\0';
                }
                else {
                  FUN_0125e7c0();
                  pvVar5 = _pthread_getspecific(pVar8);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125e7c0();
                  if (local_c0 == local_b0) {
                    pvVar5 = _pthread_getspecific(pVar8);
                    if (pvVar5 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    cVar4 = FUN_0129aaf0();
                  }
                  else {
                    cVar4 = '\0';
                  }
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_b8 != '\0') && (local_c0 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_c8 != '\0') && (local_d0 != 0)) {
                  FUN_00d50b20();
                }
              } while (cVar4 == '\0');
              *(void*)(this_ptr + 1) = 0;
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              *this_ptr = local_58;
              *(void*)(this_ptr + 1) = 1;
LAB_0129b3de:
              local_50 = '\0';
              FUN_001159b0();
              FUN_00d50b20();
              if (local_40 < iVar1) {
                FUN_000be170();
                bVar2 = true;
                goto LAB_0129b416;
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < *(int *)(local_a0 + 0xc));
    }
    FUN_000be170();
    bVar2 = false;
LAB_0129b416:
    FUN_00d50b20();
    if (bVar2) {
      return this_ptr;
    }
  }
LAB_0129b427:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

