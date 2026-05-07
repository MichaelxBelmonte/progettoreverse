// Function: FUN_01e56f90
// Address: 01e56f90
// Size: 586 bytes
// Class: GNStringTable
// String references:
//   "GNStringTable"

void FUN_01e56f90(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  if (*(int64_t *)(arg1 + 0x50) == 0) {
LAB_01e571b6:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    lVar5 = 0;
    while( true ) {
      FUN_00ca1380();
      local_48 = (int64_t *)CONCAT71(local_48._1_7_,(char)local_50);
      pplVar4 = &local_50;
      if ((char)local_50 == '\0') {
        pplVar4 = &local_48;
      }
      *(void*)pplVar4 = 0;
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      iVar3 = *(int *)(local_58 + 0xc);
      if ((char)local_48 != '\0') {
        FUN_00d50b20();
      }
      if (iVar3 <= lVar5) goto LAB_01e571b6;
      FUN_00ca1380();
      local_38[0] = (char)local_50;
      pplVar4 = &local_50;
      if ((char)local_50 == '\0') {
        pplVar4 = (int64_t **)local_38;
      }
      *(void*)pplVar4 = 0;
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      plVar1 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + lVar5 * 8);
      local_48 = plVar1;
      local_40 = '\0';
      // [STATIC_INIT: property registration]
      pplVar4 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_48;
        if (cVar2 == '\0') {
          pplVar4 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar4;
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar4 + 1) = 0;
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) break;
      lVar5 = lVar5 + 1;
    }
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

