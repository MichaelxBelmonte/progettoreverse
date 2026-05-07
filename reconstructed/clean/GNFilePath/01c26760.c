// Function: FUN_01c26760
// Address: 01c26760
// Size: 578 bytes
// Class: GNFilePath

void FUN_01c26760(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar5;
  int64_t *local_98;
  char local_90;
  int64_t *local_60;
  char local_58;
  int local_48;
  
  lVar1 = *arg1;
  if ((lVar1 != 0) && (*(int64_t *)(this_ptr + 0x180) != 0)) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar5 = 0;
      do {
        plVar2 = local_60;
        FUN_01ed4a00();
        if (local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_01c26874;
          }
        }
        else if (local_60 != (int64_t *)0x0) {
LAB_01c26874:
          local_58 = '\0';
          local_60 = (int64_t *)0x0;
          local_48 = -1;
          do {
            lVar4 = (int64_t)local_48;
            local_48 = local_48 + 1;
            if (*(int *)((int64_t)plVar2 + 0xc) <= local_48) goto LAB_01c267e0;
            local_60 = *(int64_t **)(plVar2[2] + 8 + lVar4 * 8);
            (**(code **)(*local_60 + 0x388))();
            cVar3 = (**(code **)(*local_98 + 0x50))();
            if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          } while (cVar3 == '\0');
          FUN_01ed2f40();
LAB_01c267e0:
          FUN_0038d420();
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00083b20();
  }
  return;
}

