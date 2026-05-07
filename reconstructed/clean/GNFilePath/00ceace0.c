// Function: FUN_00ceace0
// Address: 00ceace0
// Size: 1039 bytes
// Class: GNFilePath

void* FUN_00ceace0(void)

{
  char cVar1;
  int iVar2;
  void*puVar3;
  int64_t *arg1;
  void*this_ptr;
  int iVar4;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_48;
  char local_40;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
LAB_00cead53:
    do {
      cVar1 = (**(code **)(*arg1 + 0x4a8))();
      if (cVar1 != '\0') {
        (**(code **)(*arg1 + 0x4b0))();
        if (local_78 != arg1) {
          arg1 = local_78;
          if (local_70 != '\0') {
            FUN_00d50b20();
            goto LAB_00cead53;
          }
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00cead53;
      }
      (**(code **)(*arg1 + 0x388))();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = local_48;
      local_70 = '\0';
      FUN_00d23370();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*arg1 + 0x3f0))();
      if (local_48 != arg1) {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        arg1 = local_48;
      }
    } while (arg1 != (int64_t *)0x0);
  }
  FUN_00d8ede0();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00cddf30();
  *(void*)(this_ptr + 1) = 0;
  if (local_70 == '\0') {
    if (local_78 == (int64_t *)0x0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
      local_80 = (int64_t *)0x0;
      local_78 = local_80;
      goto joined_r0x00ceaf39;
    }
    FUN_00d50b00();
  }
  *this_ptr = local_78;
  *(void*)(this_ptr + 1) = 1;
joined_r0x00ceaf39:
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    if (0 < *(int *)((int64_t)puVar3 + 0xc)) {
      iVar4 = 0;
      local_80 = local_78;
      do {
        iVar2 = FUN_00d8c7a0();
        if (iVar2 != 0) {
          (**(code **)(*local_78 + 0x400))();
          if (local_80 == local_48) {
LAB_00ceb060:
            local_78 = local_80;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *this_ptr = local_48;
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              *(void*)(this_ptr + 1) = 1;
              local_80 = local_48;
              goto LAB_00ceb060;
            }
            *this_ptr = local_48;
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            *(void*)(this_ptr + 1) = 1;
            local_40 = '\0';
            local_78 = local_48;
          }
          local_80 = local_48;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int64_t)puVar3 + 0xc));
    }
    FUN_00018280();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

