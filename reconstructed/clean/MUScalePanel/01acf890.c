// Function: FUN_01acf890
// Address: 01acf890
// Size: 959 bytes
// Class: MUScalePanel
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


void FUN_01acf890(uint64_t param_1,uint64_t param_2)

{
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int64_t local_78;
  char local_70;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  fVar4 = (float)((uint64_t)param_2 >> 0x20);
  fVar2 = (float)param_2;
  if (*arg1 != 0) {
    FUN_01e42030();
    if (local_38 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else {
      FUN_01e42030();
      FUN_01d8c6e0();
      bVar1 = local_48 != (int64_t *)0x0;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e42030();
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_38 == (int64_t *)0x0) {
      return;
    }
    this_ptr[0xe] = *arg1;
    if (bVar1) {
      (**(code **)(*this_ptr + 0x448))();
      FUN_01e56750();
      FUN_01e5eec0();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e56750();
      FUN_01f27fe0();
      FUN_01f2e7e0();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01e5c1a0();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x460))();
      FUN_01f27fe0();
      FUN_01e56750();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01f45250();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d8f0f0();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 != (int64_t *)0x0) {
        (**(code **)(*local_38 + 0x9b0))();
      }
      FUN_01e53c20();
      FUN_01e3f820();
      fVar3 = fVar2;
      fVar5 = fVar4;
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e3f820();
      if ((fVar5 < fVar4) || (fVar3 < fVar2)) {
        FUN_01e53c20();
        FUN_01e53c20();
        (**(code **)(*local_48 + 0x528))();
        (**(code **)(*local_38 + 0x4e8))();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b00();
      (**(code **)(*local_38 + 0x9a8))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}

