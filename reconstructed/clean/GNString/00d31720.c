// Function: FUN_00d31720
// Address: 00d31720
// Size: 534 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d31720(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  lVar2 = g_0277d620;
  plVar1 = (int64_t *)*arg1;
  if (plVar1 != (int64_t *)0x0) {
    if (g_0277d620 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar2;
    local_60 = '\x01';
    (**(code **)(*plVar1 + 0x400))(param_1,&local_68);
    plVar1 = local_38;
    if (local_30 == '\0') {
      if (((local_38 != (int64_t *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
         (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 0x398))();
      if (cVar3 != '\0') {
        local_58 = plVar1;
        local_50 = '\0';
        FUN_00ca94c0();
        plVar1 = local_38;
        if (local_30 == '\0') {
          if (((local_38 != (int64_t *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
             (local_38 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_30 = '\0';
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar2 = g_0277d628;
        if (plVar1 != (int64_t *)0x0) {
          if (g_0277d628 != 0) {
            FUN_00d50b00();
          }
          local_48 = lVar2;
          local_40 = '\x01';
          FUN_000175c0(param_1,&local_48);
          plVar1 = local_38;
          *(void*)(this_ptr + 1) = 0;
          if (local_30 == '\0') {
            if (local_38 == (int64_t *)0x0) {
              *this_ptr = 0;
              *(void*)(this_ptr + 1) = 1;
            }
            else {
              FUN_00d50b00();
              *this_ptr = plVar1;
              *(void*)(this_ptr + 1) = 1;
              if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            *this_ptr = local_38;
            *(void*)(this_ptr + 1) = 1;
            local_30 = '\0';
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_00d50b20();
          return;
        }
      }
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

