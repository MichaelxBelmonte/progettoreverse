// Function: FUN_00c6faf0
// Address: 00c6faf0
// Size: 1671 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00c6fe38) */
/* WARNING: Removing unreachable block (ram,0x00c6fe45) */
/* WARNING: Removing unreachable block (ram,0x00c6fbd6) */
/* WARNING: Removing unreachable block (ram,0x00c6fbe3) */
/* WARNING: Removing unreachable block (ram,0x00c6fef2) */
/* WARNING: Removing unreachable block (ram,0x00c6feff) */
/* WARNING: Removing unreachable block (ram,0x00c6ffa1) */
/* WARNING: Removing unreachable block (ram,0x00c6ffae) */
/* WARNING: Removing unreachable block (ram,0x00c6fc85) */
/* WARNING: Removing unreachable block (ram,0x00c6fc92) */
/* WARNING: Removing unreachable block (ram,0x00c6fd34) */
/* WARNING: Removing unreachable block (ram,0x00c6fd41) */
/* WARNING: Removing unreachable block (ram,0x00c70050) */
/* WARNING: Removing unreachable block (ram,0x00c7005d) */
/* WARNING: Removing unreachable block (ram,0x00c700f1) */
/* WARNING: Removing unreachable block (ram,0x00c700fa) */
/* WARNING: Removing unreachable block (ram,0x00c70135) */
/* WARNING: Removing unreachable block (ram,0x00c7013e) */
/* WARNING: Removing unreachable block (ram,0x00c700a6) */
/* WARNING: Removing unreachable block (ram,0x00c700b3) */
/* WARNING: Removing unreachable block (ram,0x00c6fd8a) */
/* WARNING: Removing unreachable block (ram,0x00c6fd97) */
/* WARNING: Removing unreachable block (ram,0x00c6fcdc) */
/* WARNING: Removing unreachable block (ram,0x00c6fce9) */
/* WARNING: Removing unreachable block (ram,0x00c6fff8) */
/* WARNING: Removing unreachable block (ram,0x00c70005) */
/* WARNING: Removing unreachable block (ram,0x00c6ff4a) */
/* WARNING: Removing unreachable block (ram,0x00c6ff57) */
/* WARNING: Removing unreachable block (ram,0x00c6fc2e) */
/* WARNING: Removing unreachable block (ram,0x00c6fc3b) */
/* WARNING: Removing unreachable block (ram,0x00c6fe95) */
/* WARNING: Removing unreachable block (ram,0x00c6fea2) */
/* WARNING: Removing unreachable block (ram,0x00c6fb5f) */
/* WARNING: Removing unreachable block (ram,0x00c6fb6c) */
/* WARNING: Removing unreachable block (ram,0x00c6fde1) */
/* WARNING: Removing unreachable block (ram,0x00c6fdee) */

void FUN_00c6faf0(undefined8 param_1,int param_2)

{
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_28;
  char local_20;
  
  if (param_2 - 0x2aU < 0x4a) {
    switch(param_2) {
    case 0x2a:
      FUN_00d91a70((longlong)&switchD_00c6fb18::switchdataD_00c7071c +
                   (longlong)(int)(&switchD_00c6fb18::switchdataD_00c7071c)[param_2 - 0x2aU],1);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
LAB_00c70145:
        local_28 = 0;
      }
      break;
    default:
      goto switchD_00c6fb18_caseD_2b;
    case 0x40:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      local_28 = *unaff_RSI;
      if ((char)unaff_RSI[1] != '\0') {
        *unaff_RDI = local_28;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        *(undefined1 *)(unaff_RSI + 1) = 0;
        return;
      }
      if (local_28 != 0) {
        FUN_00d50b00();
      }
      break;
    case 0x43:
      FUN_00dd6690();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x45:
      FUN_00dd6530(*unaff_RSI,unaff_RSI[1]);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x49:
      FUN_00d46530();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x50:
      FUN_00dd65e0(*unaff_RSI);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x52:
      FUN_00dd6480(*unaff_RSI,unaff_RSI[1]);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x53:
      FUN_00dd6740(*unaff_RSI);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x55:
      FUN_00dd6950();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x5e:
      FUN_00dd6a00();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x62:
      FUN_00d46300();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 99:
      FUN_00dd68a0();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 100:
      FUN_00d470c0(*unaff_RSI);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x65:
      FUN_00d46aa0();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x66:
      FUN_00d46dc0((int)*unaff_RSI);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x69:
      FUN_00d46aa0();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x6c:
      FUN_00d468f0();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x71:
      FUN_00dd67f0();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
      break;
    case 0x73:
      FUN_00d46530();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_20 == '\0') {
        if (local_28 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_28;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        goto LAB_00c70145;
      }
    }
    *unaff_RDI = local_28;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
switchD_00c6fb18_caseD_2b:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  return;
}


