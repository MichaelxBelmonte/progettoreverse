// Function: FUN_000c3e50
// Address: 000c3e50
// Size: 543 bytes
// Class: GNRootView

int64_t * FUN_000c3e50(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_000c41f0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    plVar1 = *(int64_t **)(arg1 + 0x158);
    (**(code **)(*plVar1 + 0x368))();
    if ((*(int64_t *)(arg1 + 0x168) != 0) &&
       (lVar2 = *(int64_t *)(*(int64_t *)(arg1 + 0x168) + 0x10), 0 < *(int *)(lVar2 + 0xc)))
    {
      lVar4 = 0;
      do {
        FUN_0051be00();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        cVar3 = FUN_00d24090();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          FUN_0051b590();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_00d235a0();
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (*(int *)(local_40 + 0xc) == *(int *)(*param_2 + 0xc)) break;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar2 + 0xc));
    }
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    (**(code **)(*plVar1 + 0x378))();
  }
  return this_ptr;
}

