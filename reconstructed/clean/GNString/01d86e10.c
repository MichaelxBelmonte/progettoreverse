// Function: FUN_01d86e10
// Address: 01d86e10
// Size: 710 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d86e10(uint32_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int64_t *local_38;
  char local_30;
  
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  fVar9 = (float)param_2;
  fVar10 = fVar9;
  if ((this_ptr[3] != 0) && (uVar3 = FUN_01e59f30(), (uVar3 & 0x400) != 0)) {
    return;
  }
  (**(code **)(*this_ptr + 0x640))();
  if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_38 + 0x650))();
  if (cVar2 == '\0') goto LAB_01d87024;
  if (this_ptr[0x2c] != 0) {
    uVar8 = FUN_01d526f0();
    FUN_01e3f820();
    if ((((float)uVar8 != fVar10) || (NAN((float)uVar8) || NAN(fVar10))) ||
       ((float)((uint64_t)uVar8 >> 0x20) != fVar11)) {
      lVar5 = 0;
      if (this_ptr[0x2c] != 0) {
        this_ptr[0x2c] = 0;
        FUN_00d50b20();
        goto LAB_01d86ef1;
      }
    }
    else {
LAB_01d86ef1:
      lVar5 = this_ptr[0x2c];
    }
    if (lVar5 != 0) goto LAB_01d87024;
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (int64_t *)this_ptr[0x2c];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x2c] = (int64_t)plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01e3f820();
  FUN_01d4ed60(fVar10);
  FUN_01d52700();
  FUN_01d52740();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  uVar6 = FUN_01e3f820();
  fVar11 = fVar10;
  uVar7 = FUN_01e3f820();
  (**(code **)(*local_38 + 0x410))(uVar6,fVar10,uVar7,fVar11);
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
LAB_01d87024:
  lVar5 = this_ptr[0x2c];
  if (lVar5 == 0) {
    FUN_01e3f820();
    (**(code **)(*local_38 + 0x410))();
  }
  else {
    plVar1 = (int64_t *)*arg1;
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x408))(param_1,fVar9,param_1);
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

