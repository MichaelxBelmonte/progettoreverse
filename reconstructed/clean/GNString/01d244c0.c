// Function: FUN_01d244c0
// Address: 01d244c0
// Size: 1124 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d244c0(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00d3ecc0();
  lVar1 = g_027ef960;
  if (g_027ef960 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_48 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_00d3ecc0();
    lVar1 = g_027ebc50;
    if (g_027ebc50 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_48 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_00d3ecc0();
      lVar1 = g_027f32f8;
      if (g_027f32f8 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_48 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        FUN_00d3ecc0();
        lVar1 = g_027ef958;
        if (g_027ef958 != 0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*local_48 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          FUN_00d530a0();
        }
        else {
          FUN_00d3ecf0();
          if (local_40[0] == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40[0] = '\0';
          }
          (**(code **)(*this_ptr + 0x458))();
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d3ecf0();
        if (local_40[0] == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        (**(code **)(*this_ptr + 0x450))();
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d3ecf0();
      if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar5 = (int64_t *)this_ptr[0xc];
      if (plVar5 == (int64_t *)0x0) {
        if (*(int *)(this_ptr[2] + 0xc) != 0) {
          FUN_00d23310();
          pcVar4 = local_38;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar3 = (int64_t *)FUN_00cafdf0();
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b00();
            plVar5 = plVar3;
          }
          if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d50b00();
      }
      if (local_48 == plVar5) {
        FUN_01d2b270();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01d2b270();
  }
  return;
}

