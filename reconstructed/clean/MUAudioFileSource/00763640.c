// Function: FUN_00763640
// Address: 00763640
// Size: 558 bytes
// Class: MUAudioFileSource

void FUN_00763640(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int iVar5;
  int64_t local_a0;
  char local_98;
  int64_t local_78;
  char local_70;
  int64_t local_60;
  char local_58;
  int local_48;
  
  cVar3 = (**(code **)(*this_ptr + 0x478))();
  if (((char)this_ptr[0x19] != '\0') && (cVar3 != '\0')) {
    *(void*)(this_ptr + 0x19) = 0;
  }
  (**(code **)(*(int64_t *)this_ptr[0x10] + 0x4a0))();
  if (local_98 == '\0') {
    if (local_a0 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_a0 == 0) {
    return;
  }
  if (0 < *(int *)(local_a0 + 0xc)) {
    iVar5 = 0;
    do {
      lVar2 = local_60;
      (**(code **)(*this_ptr + 0x610))();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
          goto LAB_007637b0;
        }
      }
      else if (local_60 != 0) {
LAB_007637b0:
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        while( true ) {
          lVar4 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(lVar2 + 0xc) <= local_48) break;
          lVar1 = *(int64_t *)(lVar2 + 0x10);
          local_60 = *(int64_t *)(lVar1 + 8 + lVar4 * 8);
          local_70 = '\0';
          local_78 = local_60;
          FUN_0064e3a0(lVar1,&local_78);
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_000e3600();
        FUN_00d50b20();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_a0 + 0xc));
  }
  FUN_000ad7a0();
  FUN_00d50b20();
  return;
}

