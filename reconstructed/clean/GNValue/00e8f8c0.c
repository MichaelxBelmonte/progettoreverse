// Function: FUN_00e8f8c0
// Address: 00e8f8c0
// Size: 566 bytes
// Class: GNValue

void FUN_00e8f8c0(void* param_1,uint64_t param_2,mach_vm_size_t param_3)

{
  ushort uVar1;
  void*puVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  void*puVar8;
  vm_map_t vVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t local_40;
  char local_38;
  
  pvVar7 = _pthread_getspecific(param_1);
  if ((pvVar7 == (void *)0x0) || (*(int64_t *)((int64_t)pvVar7 + 0x58) == 0)) {
    FUN_00da5ad0();
    cVar4 = *(char *)(local_40 + 0x18);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      lVar10 = 0;
      do {
        uVar1 = (&g_028026e8)[lVar10 * 0x1c];
        lVar11 = (&g_028026d0)[lVar10 * 7];
        if (lVar11 == 0) {
LAB_00e8f930:
          (&g_028026f0)[lVar10 * 7] = 0;
          (&g_028026f8)[lVar10 * 7] = 0;
        }
        else {
          bVar3 = false;
          do {
            if (*(int64_t *)(lVar11 + 8) != 0) {
              uVar5 = FUN_00e31390();
              do {
                if (((uVar5 & 1) != 0) || ((uVar5 >> 1 & 0x7fff) < (uint)uVar1)) {
                  lVar11 = *(int64_t *)(lVar11 + 0x10);
                  goto joined_r0x00e8f987;
                }
                vVar9 = 1;
                cVar4 = FUN_00e314a0(1,uVar5 | 1);
              } while (cVar4 == '\0');
              *(void*)(lVar11 + 8) = 0;
              FUN_00e314f0();
              if (g_028026b8 == 0) {
                _mach_vm_deallocate(vVar9,0x10000,param_3);
              }
              else {
                FUN_00e91b20();
              }
            }
            if (!bVar3) {
              (&g_028026f0)[lVar10 * 7] = lVar11;
              bVar3 = true;
            }
            lVar11 = *(int64_t *)(lVar11 + 0x10);
            (&g_028026f8)[lVar10 * 7] = lVar11;
joined_r0x00e8f987:
          } while (lVar11 != 0);
          if (!bVar3) goto LAB_00e8f930;
        }
        lVar11 = g_028026b0;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x23);
      while (iVar6 = FUN_00e31390(), iVar6 < *(int *)(lVar11 + 0xc)) {
        FUN_00e91340();
      }
      FUN_00e8fb20();
      puVar8 = (void*)FUN_00e313b0();
      while (puVar8 != (void*)0x0) {
        while( true ) {
          puVar2 = (void*)*puVar8;
          vVar9 = 1;
          cVar4 = FUN_00e31450(1,puVar2);
          if (cVar4 != '\0') break;
          if (puVar8 == (void*)0x0) {
            return;
          }
        }
        _mach_vm_deallocate(vVar9,puVar8[1],param_3);
        puVar8 = puVar2;
      }
    }
  }
  return;
}

