// Function: FUN_01cea620
// Address: 01cea620
// Size: 1530 bytes
// Class: Unknown

void FUN_01cea620(void)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00d23340();
  local_80 = local_40[0];
  pcVar4 = local_40;
  if (local_40[0] == '\0') {
    pcVar4 = &local_80;
  }
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_01cea6fe;
    FUN_00d50b00();
LAB_01cea69e:
    lVar1 = local_48[4];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01ce41d0();
    local_50 = local_48;
    if (local_48 == (int64_t *)0x0) {
      local_50 = (int64_t *)0x0;
      bVar2 = false;
    }
    else if (local_40[0] == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
LAB_01cea7a1:
    if ((local_50 != (int64_t *)0x0) && (cVar3 = FUN_00d23d70(), cVar3 != '\0')) {
      FUN_00d237a0();
      FUN_01dd3d10();
      (**(code **)(*this_ptr + 0x950))();
      goto LAB_01ceabf9;
    }
  }
  else {
    if (local_48 != (int64_t *)0x0) goto LAB_01cea69e;
LAB_01cea6fe:
    FUN_01ce41d0();
    local_50 = local_48;
    if (local_48 != (int64_t *)0x0) {
      bVar2 = true;
      if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01cea7a1;
    }
    local_50 = (int64_t *)0x0;
    bVar2 = false;
  }
  if (*arg1 != 0) {
    FUN_01ce9490();
    if ((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d23d70();
    if (cVar3 == '\0') {
      if (*(int *)((int64_t)local_48 + 0xc) != 0) {
        do {
          FUN_00d23740();
          FUN_00d23340();
          local_38[0] = local_40[0];
          pcVar4 = local_40;
          if (local_40[0] == '\0') {
            pcVar4 = local_38;
          }
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_38[0] == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38[0] = '\0';
          }
          FUN_01ce41d0();
          lVar1 = CONCAT71(uStack_7f,local_80);
          if (local_78 == '\0') {
            if (((lVar1 != 0) && (FUN_00d50b00(), local_78 != '\0')) &&
               (CONCAT71(uStack_7f,local_80) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_78 = '\0';
          }
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          cVar3 = FUN_00d23d70();
          if (cVar3 != '\0') {
            FUN_00d21140();
            FUN_01ce9a80();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            break;
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        } while (*(int *)((int64_t)local_48 + 0xc) != 0);
      }
    }
    else {
      while( true ) {
        FUN_00d23340();
        local_80 = local_40[0];
        pcVar4 = local_40;
        if (local_40[0] == '\0') {
          pcVar4 = &local_80;
        }
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        cVar3 = (**(code **)(*local_48 + 0x50))();
        if (local_80 != '\0') {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') break;
        FUN_00d23740();
      }
      FUN_01ce9a80();
      if (local_48 == (int64_t *)0x0) goto LAB_01ceabf9;
    }
    FUN_00d50b20();
  }
LAB_01ceabf9:
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

