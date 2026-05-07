// Function: FUN_00b69850
// Address: 00b69850
// Size: 945 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00b69850(uint64_t param_1)

{
  bool bVar1;
  char cVar2;
  uint32_t uVar3;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t *local_40;
  char local_38;
  
  do {
    FUN_00b33310();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_40 == (int64_t *)0x0) {
      return;
    }
    cVar2 = FUN_00b38170();
    if (cVar2 == '\0') {
      cVar2 = FUN_00b381b0();
      if (cVar2 != '\0') {
        (**(code **)(*this_ptr + 0x610))();
      }
    }
    else {
      FUN_00b38180();
      if (local_40 == (int64_t *)0x0) {
        bVar1 = true;
        plVar4 = (int64_t *)0x0;
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar1 = false;
        }
        else {
          bVar1 = false;
        }
      }
      uVar3 = FUN_00b38160();
      cVar2 = FUN_00b51d60();
      if (cVar2 == '\0') {
        cVar2 = FUN_00b518a0();
        if (cVar2 == '\0') {
          cVar2 = FUN_00b51910();
          if (cVar2 == '\0') {
            cVar2 = FUN_00b51d00();
            if ((cVar2 != -0x50) || (cVar2 = FUN_00b51df0(), cVar2 != '{')) {
              (**(code **)(*this_ptr + 0x5d8))(param_1,uVar3);
            }
          }
          else {
            (**(code **)(*this_ptr + 0x5f8))(param_1,uVar3);
          }
        }
        else if ((int)this_ptr[0x12] == 2) {
          (**(code **)(*this_ptr + 0x5f0))(param_1,uVar3);
        }
        else if ((int)this_ptr[0x12] == 1) {
          (**(code **)(*this_ptr + 0x600))(param_1,uVar3);
          (**(code **)(*this_ptr + 0x5f0))(param_1,uVar3);
        }
        else {
          (**(code **)(*this_ptr + 0x5f0))(param_1,uVar3);
        }
      }
      else {
        cVar2 = (**(code **)(*plVar4 + 0x368))();
        if (cVar2 == '\0') {
          (**(code **)(*this_ptr + 0x5e8))(param_1,uVar3);
        }
        else {
          (**(code **)(*this_ptr + 0x5e0))(param_1,uVar3);
        }
      }
      if (!bVar1 && plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  } while( true );
}

