// Function: FUN_017c0610
// Address: 017c0610
// Size: 504 bytes
// Class: Unknown

int64_t * FUN_017c0610(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_80;
  char local_78;
  
  FUN_017bf740();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
      goto LAB_017c0656;
    }
  }
  else if (local_80 != 0) {
LAB_017c0656:
    if (0 < *(int *)(local_80 + 0xc)) {
      lVar6 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(local_80 + 0x10) + lVar6 * 8);
        pvVar4 = _pthread_getspecific(param_1);
        if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          lVar5 = *(int64_t *)(lVar1 + 0x40);
        }
        else {
          lVar5 = *(int64_t *)
                   (*(int64_t *)(lVar1 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x40);
        }
        if (lVar5 != 0) {
          FUN_00d50b00();
          pvVar4 = _pthread_getspecific(param_1);
          if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
            plVar2 = *(int64_t **)(lVar1 + 0x40);
          }
          else {
            plVar2 = *(int64_t **)
                      (*(int64_t *)(lVar1 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                      0x40);
          }
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*plVar2 + 0x50))();
          FUN_00d50b20();
          FUN_00d50b20();
          if (cVar3 != '\0') {
            *(void*)(this_ptr + 1) = 0;
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            *this_ptr = lVar1;
            *(void*)(this_ptr + 1) = 1;
            FUN_017c0b20();
            goto LAB_017c0801;
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_80 + 0xc));
    }
    FUN_017c0b20();
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
LAB_017c0801:
    FUN_00d50b20();
    return this_ptr;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

