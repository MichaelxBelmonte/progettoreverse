// Function: FUN_012992a0
// Address: 012992a0
// Size: 888 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_012992a0(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  uint uVar9;
  int64_t *this_ptr;
  int64_t lVar10;
  int local_50;
  
  lVar1 = *this_ptr;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar9 = 0;
      do {
        lVar10 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar9 * 8);
        pvVar4 = _pthread_getspecific(uVar9);
        if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        lVar10 = *(int64_t *)(lVar10 + 0xe0);
        if (lVar10 != 0) {
          FUN_00d50b00();
          local_50 = -1;
          while( true ) {
            lVar5 = (int64_t)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar10 + 0xc) <= local_50) break;
            lVar7 = *(int64_t *)(lVar10 + 0x10);
            lVar5 = *(int64_t *)(lVar7 + 8 + lVar5 * 8);
            pvVar4 = _pthread_getspecific((void*)lVar7);
            pVar8 = (void*)lVar7;
            lVar7 = lVar5;
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              lVar7 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            }
            lVar7 = *(int64_t *)(lVar7 + 0x50);
            if (lVar7 == 0) {
LAB_012995b0:
              iVar3 = -1;
              iVar2 = -1;
            }
            else {
              pvVar4 = _pthread_getspecific(pVar8);
              if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
                lVar7 = *(int64_t *)(lVar7 + 0x40);
                if (lVar7 != 0) goto LAB_012994a0;
                goto LAB_012995b0;
              }
              lVar7 = *(int64_t *)
                       (*(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8)
                       + 0x40);
              if (lVar7 == 0) goto LAB_012995b0;
LAB_012994a0:
              pvVar4 = _pthread_getspecific(pVar8);
              if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
                if (*(int64_t *)(lVar7 + 0x60) != 0) goto LAB_012994f0;
                goto LAB_012995b0;
              }
              if (*(int64_t *)
                   (*(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                   0x60) == 0) goto LAB_012995b0;
LAB_012994f0:
              pvVar4 = _pthread_getspecific(pVar8);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar2 = FUN_00d23d20();
              pvVar4 = _pthread_getspecific(pVar8);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar3 = FUN_00d23d20();
              if ((iVar2 == -1) || (iVar3 == -1)) goto LAB_012995b0;
            }
            pvVar4 = _pthread_getspecific(pVar8);
            lVar7 = lVar5;
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              lVar7 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            }
            *(int *)(lVar7 + 0x60) = iVar2;
            pvVar4 = _pthread_getspecific(pVar8);
            if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            *(int *)(lVar5 + 100) = iVar3;
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}

