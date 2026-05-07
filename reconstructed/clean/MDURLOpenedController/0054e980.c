// Function: FUN_0054e980
// Address: 0054e980
// Size: 529 bytes
// Class: MDURLOpenedController

void FUN_0054e980(char *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char *pcVar3;
  void *pvVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar5;
  int64_t local_68;
  char local_60 [8];
  int64_t local_58;
  uint64_t local_50;
  uint32_t local_48;
  char local_40;
  undefined7 uStack_3f;
  char local_38;
  
  while( true ) {
    lVar1 = *(int64_t *)(this_ptr + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar5 = *(int *)(lVar1 + 0xc);
    FUN_00d50b20();
    if (iVar5 == 0) break;
    lVar1 = *(int64_t *)(this_ptr + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d23340();
    local_40 = local_60[0];
    param_1 = &local_40;
    pcVar3 = local_60;
    if (local_60[0] == '\0') {
      pcVar3 = param_1;
    }
    *pcVar3 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    FUN_0054df20();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_60[0] = '\0';
    local_48 = 0;
    local_50 = 0;
    local_58 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar5 = 0;
      do {
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d51d20();
        lVar2 = CONCAT71(uStack_3f,local_40);
        if (local_38 == '\0') {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_0054ddf0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar5);
      } while (iVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_0032bfd0();
  }
  FUN_0054e050();
  return;
}

