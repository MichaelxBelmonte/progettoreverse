// Function: FUN_013e9e30
// Address: 013e9e30
// Size: 1009 bytes
// Class: Unknown

void FUN_013e9e30(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  uint uVar9;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c0;
  char local_b8;
  int64_t *local_68;
  char local_60;
  int local_50;
  
  lVar1 = this_ptr[0x1d];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2240();
  if (local_b8 == '\0') {
    if (local_c0 == 0) goto LAB_013ea219;
    FUN_00d50b00();
  }
  else if (local_c0 == 0) goto LAB_013ea219;
  if (0 < *(int *)(local_c0 + 0xc)) {
    uVar9 = 0;
    do {
      plVar7 = *(int64_t **)(*(int64_t *)(local_c0 + 0x10) + (uint64_t)uVar9 * 8);
      uVar6 = uVar9;
      pvVar3 = _pthread_getspecific(uVar9);
      plVar8 = plVar7;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar8 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      cVar2 = (**(code **)(*plVar8 + 0x398))();
      if (cVar2 == '\0') {
        lVar4 = this_ptr[0x1e];
        if (lVar4 == 0) {
LAB_013ea079:
          pvVar3 = _pthread_getspecific(uVar6);
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar7 + 0x370))();
          if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          (**(code **)(*this_ptr + 0x3a8))();
          (**(code **)(*local_68 + 0x3a0))();
          FUN_00b335d0();
          (**(code **)(*local_68 + 0x398))();
          FUN_00d50b00();
          FUN_012dd9b0();
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          FUN_00b33520();
          FUN_00b33530();
          FUN_00b33590();
          FUN_00b335a0();
          (**(code **)(*local_68 + 0x368))();
          FUN_00ca0840();
          FUN_00d50b20();
        }
        else {
          local_60 = '\0';
          local_68 = (int64_t *)0x0;
          local_50 = -1;
          do {
            lVar5 = (int64_t)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar4 + 0xc) <= local_50) {
              FUN_013eb3d0();
              uVar6 = (uint)lVar4;
              goto LAB_013ea079;
            }
            local_68 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + 8 + lVar5 * 8);
            FUN_013e9070();
            if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          } while (local_d8 != plVar7);
          FUN_013eb3d0();
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *(int *)(local_c0 + 0xc));
  }
  FUN_007fe1f0();
  FUN_00d50b20();
LAB_013ea219:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

