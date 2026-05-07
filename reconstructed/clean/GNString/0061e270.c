// Function: FUN_0061e270
// Address: 0061e270
// Size: 765 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_0061e270(uint64_t param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  undefined7 uVar4;
  uint64_t uVar3;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = local_40;
  if (cVar2 == '\0') {
    FUN_0063f230();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_0061e38f;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_0061e38f:
      FUN_00223a60();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00223a60();
        (**(code **)(&UNK_00001670 + *local_58))();
        FUN_000bda90();
        if (local_40 == (int64_t *)0x0) {
          plVar5 = (int64_t *)0x0;
          bVar1 = false;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
        }
        else {
          local_38 = '\0';
          bVar1 = true;
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_0061e479;
      }
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x5e0))();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_0061e32c;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_0061e32c:
      FUN_00752180();
      if (local_40 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_00d50b20();
LAB_0061e479:
      if (plVar5 != (int64_t *)0x0) {
        FUN_001060a0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == (int64_t *)0x0) {
          uVar3 = 0;
        }
        else {
          if (param_2 != '\0') {
            FUN_0010ba00();
          }
          FUN_01caeae0();
          uVar4 = (undefined7)((uint64_t)local_40 >> 8);
          if (local_38 == '\0') {
            if (local_40 == (int64_t *)0x0) goto LAB_0061e563;
            FUN_00d50b00();
          }
          else if (local_40 == (int64_t *)0x0) {
LAB_0061e563:
            uVar3 = CONCAT71(uVar4,1);
            goto joined_r0x0061e548;
          }
          FUN_001060a0();
          (**(code **)(*local_40 + 0x3c8))();
          FUN_01d66ab0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar3 = CONCAT71(uVar4,1);
          FUN_00d50b20();
        }
joined_r0x0061e548:
        if (bVar1) {
          FUN_00d50b20();
        }
        goto LAB_0061e552;
      }
    }
  }
  uVar3 = 0;
LAB_0061e552:
  return uVar3 & 0xffffffff;
}

