// Function: FUN_00de2c40
// Address: 00de2c40
// Size: 1572 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00de2c8f) */
/* WARNING: Removing unreachable block (ram,0x00de2c98) */

ulonglong FUN_00de2c40(void)

{
  undefined8 *unaff_RDI;
  ulonglong uVar1;
  bool bVar2;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  int local_38;
  char local_31;
  
  (**(code **)(*(longlong *)*unaff_RDI + 0x4d8))();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00de2c9d;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_00de2c9d:
    local_31 = '\0';
switchD_00de2d11_caseD_0:
    FUN_00ccd300(&local_38,&local_31);
    bVar2 = local_38 == 1;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == (longlong *)0x0 && bVar2) goto code_r0x00de2d00;
    (**(code **)(*local_48 + 0x368))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_00de324f;
  }
  uVar1 = 0;
  goto LAB_00de325a;
code_r0x00de2d00:
  switch(local_31) {
  case '\0':
  case '\t':
  case '\n':
  case '\r':
  case ' ':
    goto switchD_00de2d11_caseD_0;
  case '/':
    FUN_00ccd300(&local_38,&local_31);
    bVar2 = local_38 == 1;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == (longlong *)0x0 && bVar2) {
      if (local_31 == '/') {
        do {
          FUN_00ccd300(&local_38,&local_31);
          bVar2 = local_38 != 1;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 != (longlong *)0x0 || bVar2) goto switchD_00de2d11_caseD_f0;
        } while (local_31 != '\n');
        goto switchD_00de2d11_caseD_0;
      }
      if (local_31 == '*') {
        do {
          do {
            FUN_00ccd300(&local_38,&local_31);
            bVar2 = local_38 != 1;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 != (longlong *)0x0 || bVar2) goto switchD_00de2d11_caseD_f0;
          } while (local_31 != '*');
          FUN_00ccd300(&local_38,&local_31);
          bVar2 = local_38 != 1;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 != (longlong *)0x0 || bVar2) {
            (**(code **)(*local_48 + 0x368))();
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00de324f;
          }
        } while (local_31 != '/');
        goto switchD_00de2d11_caseD_0;
      }
      (**(code **)(*local_48 + 0x368))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*local_48 + 0x368))();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    break;
  case -0x11:
    FUN_00ccd300(&local_38,&local_31);
    bVar2 = local_38 == 1;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == (longlong *)0x0 && bVar2) {
      if (local_31 == -0x45) {
        FUN_00ccd300(&local_38,&local_31);
        bVar2 = local_38 == 1;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 == (longlong *)0x0 && bVar2) {
          if (local_31 == -0x41) goto switchD_00de2d11_caseD_0;
          (**(code **)(*local_48 + 0x368))();
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*local_48 + 0x368))();
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        (**(code **)(*local_48 + 0x368))();
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*local_48 + 0x368))();
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
    }
    break;
  default:
    goto switchD_00de2d11_caseD_f0;
  case -2:
    FUN_00ccd300(&local_38,&local_31);
    bVar2 = local_38 == 1;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == (longlong *)0x0 && bVar2) {
      if (local_31 == -1) goto switchD_00de2d11_caseD_0;
      (**(code **)(*local_48 + 0x368))();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*local_48 + 0x368))();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    break;
  case -1:
    FUN_00ccd300(&local_38,&local_31);
    bVar2 = local_38 == 1;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == (longlong *)0x0 && bVar2) {
      if (local_31 == -2) goto switchD_00de2d11_caseD_0;
      (**(code **)(*local_48 + 0x368))();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*local_48 + 0x368))();
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_00de324f:
  uVar1 = 0;
  goto LAB_00de3252;
switchD_00de2d11_caseD_f0:
  (**(code **)(*local_48 + 0x368))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = CONCAT71((int7)((ulonglong)&local_38 >> 8),local_31 == '{');
LAB_00de3252:
  FUN_00d50b20();
LAB_00de325a:
  return uVar1 & 0xffffffff;
}


