// Function: FUN_017d4380
// Address: 017d4380
// Size: 876 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_017d4380(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar6;
  int64_t lVar7;
  int64_t local_b8;
  char local_b0;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t local_40;
  char local_38;
  
  lVar7 = *(int64_t *)(arg1 + 0x108);
  if (*(int *)(lVar7 + 0xc) != 0) {
    *(void*)(this_ptr + 1) = 0;
    FUN_00d50b00();
    *this_ptr = lVar7;
    goto LAB_017d46ea;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018c5590();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_00d243f0();
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = *(int64_t *)(arg1 + 0x108);
  if (lVar7 == 0) {
    *(void*)(this_ptr + 1) = 0;
LAB_017d46e3:
    lVar7 = 0;
  }
  else {
    if (0 < *(int *)(lVar7 + 0xc)) {
      iVar6 = 0;
      do {
        lVar1 = *(int64_t *)(arg1 + 0x100);
        if (lVar1 != 0) {
          local_50 = -1;
          do {
            lVar3 = (int64_t)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar1 + 0xc) <= local_50) goto LAB_017d44e0;
            lVar5 = *(int64_t *)(lVar1 + 0x10);
            lVar3 = *(int64_t *)(lVar5 + 8 + lVar3 * 8);
            pvVar2 = _pthread_getspecific((void*)lVar5);
            pVar4 = (void*)lVar5;
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507640();
            pvVar2 = _pthread_getspecific(pVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507640();
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          } while (local_40 != local_b8);
          local_38 = '\0';
          FUN_00d233f0();
          local_40 = lVar3;
LAB_017d44e0:
          FUN_017d9a00();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar7 + 0xc));
    }
    FUN_017d9a00();
    lVar7 = *(int64_t *)(arg1 + 0x108);
    *(void*)(this_ptr + 1) = 0;
    if (lVar7 == 0) goto LAB_017d46e3;
    FUN_00d50b00();
  }
  *this_ptr = lVar7;
LAB_017d46ea:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

