// Function: FUN_00c6faf0
// Address: 00c6faf0
// Size: 1671 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00c6faf0(uint64_t param_1,int param_2)

{
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_28;
  char local_20;
  
  if (param_2 - 0x2aU < 0x4a) {
    switch(param_2) {
    case 0x2a:
      FUN_00d91a70((int64_t)&switchD_00c6fb18::switchdataD_00c7071c +
                   (int64_t)(int)(&switchD_00c6fb18::switchdataD_00c7071c)[param_2 - 0x2aU],1);
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
LAB_00c70145:
        local_28 = 0;
      }
      break;
    default:
      goto switchD_00c6fb18_caseD_2b;
    case 0x40:
      *(void*)(this_ptr + 1) = 0;
      local_28 = *arg1;
      if ((char)arg1[1] != '\0') {
        *this_ptr = local_28;
        *(void*)(this_ptr + 1) = 1;
        *(void*)(arg1 + 1) = 0;
        return;
      }
      if (local_28 != 0) {
        FUN_00d50b00();
      }
      break;
    case 0x43:
      FUN_00dd6690();
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x45:
      FUN_00dd6530(*arg1,arg1[1]);
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x49:
      FUN_00d46530();
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x50:
      FUN_00dd65e0(*arg1);
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x52:
      FUN_00dd6480(*arg1,arg1[1]);
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x53:
      FUN_00dd6740(*arg1);
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x55:
      FUN_00dd6950();
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x5e:
      FUN_00dd6a00();
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x62:
      FUN_00d46300();
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 99:
      FUN_00dd68a0();
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 100:
      FUN_00d470c0(*arg1);
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x65:
      FUN_00d46aa0();
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x66:
      FUN_00d46dc0((int)*arg1);
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x69:
      FUN_00d46aa0();
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x6c:
      FUN_00d468f0();
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x71:
      FUN_00dd67f0();
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x73:
      FUN_00d46530();
      *(void*)(this_ptr + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *this_ptr = local_28;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
    }
    *this_ptr = local_28;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
switchD_00c6fb18_caseD_2b:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  return;
}

