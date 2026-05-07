// Function: FUN_006fcaf0
// Address: 006fcaf0
// Size: 827 bytes
// Class: Unknown

void FUN_006fcaf0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  char cVar4;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  lVar1 = this_ptr[2];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_002ea230();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_006f3f00();
  cVar4 = FUN_00751ba0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && ((int)this_ptr[0x1d] != 0)) {
    FUN_006f3f00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      (**(code **)(*this_ptr + 0x5d8))();
      if (local_38 == '\0') {
        if (local_40 == 0) goto LAB_006fce11;
        FUN_00d50b00();
      }
      else if (local_40 == 0) goto LAB_006fce11;
      FUN_0062abf0();
      if (local_40 != 0) {
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        FUN_0051be00();
        if (local_40 == 0) {
          bVar3 = true;
        }
        else {
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          plVar2 = (int64_t *)this_ptr[2];
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar2 + 0x9a0))();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d50b20();
          lVar1 = this_ptr[2];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_002f1240();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != 0) && (local_40 != 0)) {
            FUN_01ed9930();
          }
          if (local_40 != 0) {
            FUN_00d50b20();
            FUN_00d50b20();
          }
          bVar3 = false;
        }
        FUN_00d50b20();
        if (!bVar3) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
LAB_006fce11:
  *(void*)(this_ptr + 0x1d) = 0;
  return;
}

