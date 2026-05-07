// Function: FUN_01298e30
// Address: 01298e30
// Size: 878 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01298e30(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_48;
  char local_40;
  
  lVar1 = *this_ptr;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          lVar4 = *(int64_t *)(lVar2 + 0xa0);
        }
        else {
          lVar4 = *(int64_t *)
                   (*(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
                   0xa0);
        }
        if (lVar4 != 0) {
          FUN_00d50b00();
          pvVar3 = _pthread_getspecific(param_1);
          if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
            lVar4 = *(int64_t *)(lVar2 + 0xa0);
          }
          else {
            lVar4 = *(int64_t *)
                     (*(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
                     0xa0);
          }
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (local_48 == 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01270710();
          }
        }
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          lVar4 = *(int64_t *)(lVar2 + 0xa8);
        }
        else {
          lVar4 = *(int64_t *)
                   (*(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
                   0xa8);
        }
        if (lVar4 != 0) {
          FUN_00d50b00();
          pvVar3 = _pthread_getspecific(param_1);
          if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
            lVar2 = *(int64_t *)(lVar2 + 0xa8);
          }
          else {
            lVar2 = *(int64_t *)
                     (*(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
                     0xa8);
          }
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (local_48 == 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01270900();
          }
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}

