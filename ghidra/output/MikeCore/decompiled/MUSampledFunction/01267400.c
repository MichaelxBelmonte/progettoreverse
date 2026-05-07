// Function: FUN_01267400
// Address: 01267400
// Size: 1430 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x01267797) */
/* WARNING: Removing unreachable block (ram,0x012677a0) */
/* WARNING: Removing unreachable block (ram,0x012677ab) */
/* WARNING: Removing unreachable block (ram,0x012677b4) */
/* WARNING: Removing unreachable block (ram,0x01267699) */
/* WARNING: Removing unreachable block (ram,0x012676a2) */
/* WARNING: Removing unreachable block (ram,0x012674fb) */
/* WARNING: Removing unreachable block (ram,0x01267504) */
/* WARNING: Removing unreachable block (ram,0x01267623) */
/* WARNING: Removing unreachable block (ram,0x0126762c) */
/* WARNING: Removing unreachable block (ram,0x0126781c) */
/* WARNING: Removing unreachable block (ram,0x01267825) */

void FUN_01267400(double param_1)

{
  void *pvVar1;
  pthread_key_t in_ECX;
  longlong unaff_RDI;
  ulonglong uVar2;
  double dVar3;
  double local_68;
  double local_58;
  longlong local_40;
  char local_38;
  
  if (NAN(param_1)) {
    FUN_00d64850();
    *(undefined8 *)(unaff_RDI + 0x118) = 0x7ff8000000000000;
    FUN_00d64910();
    if ((*(double *)(unaff_RDI + 0x128) == DAT_0238fee8) &&
       (!NAN(*(double *)(unaff_RDI + 0x128)) && !NAN(DAT_0238fee8))) {
      return;
    }
    FUN_00d64850();
    *(undefined8 *)(unaff_RDI + 0x128) = 0x3ff0000000000000;
    FUN_00d64910();
    return;
  }
  param_1 = param_1 - *(double *)(unaff_RDI + 0xe8);
  dVar3 = *(double *)(unaff_RDI + 0xf0);
  if (param_1 <= *(double *)(unaff_RDI + 0xf0)) {
    dVar3 = param_1;
  }
  local_58 = (double)(~-(ulonglong)(0.0 < dVar3) & (ulonglong)DAT_023908c8 |
                     (ulonglong)dVar3 & -(ulonglong)(0.0 < dVar3));
  dVar3 = (double)FUN_012671f0();
  if (NAN(local_58)) {
    local_58 = DAT_023908c8;
    goto LAB_012678b2;
  }
  if (dVar3 < local_58) {
    uVar2 = -(ulonglong)(local_58 < *(double *)(unaff_RDI + 0xf0));
    local_68 = (double)(~uVar2 & (ulonglong)DAT_023908c8 | uVar2 & (ulonglong)local_58);
    if (NAN(local_68)) {
      local_68 = DAT_023908c8;
    }
    else {
      FUN_0125e7c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_01267509;
        }
      }
      else if (local_40 != 0) {
LAB_01267509:
        local_68 = (double)FUN_012685b0(local_68);
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar3 = (double)FUN_013de8d0();
        FUN_00d50b20();
        local_68 = local_68 + dVar3;
      }
      if ((*(double *)(unaff_RDI + 0x120) == local_68) &&
         (!NAN(*(double *)(unaff_RDI + 0x120)) && !NAN(local_68))) goto LAB_012675bb;
    }
    FUN_00d64850();
    *(double *)(unaff_RDI + 0x120) = local_68;
    FUN_00d64910();
  }
LAB_012675bb:
  FUN_01268710();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_012675ec;
    }
  }
  else if (local_40 != 0) {
LAB_012675ec:
    FUN_0125e7c0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01267631;
      }
    }
    else if (local_40 != 0) {
LAB_01267631:
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_012676a7;
        }
      }
      else if (local_40 != 0) {
LAB_012676a7:
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e61a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013710d0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_0126782a;
    }
  }
  else if (local_40 != 0) {
LAB_0126782a:
    local_58 = (double)FUN_012685b0(local_58);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar3 = (double)FUN_013de8d0();
    FUN_00d50b20();
    local_58 = local_58 + dVar3;
  }
  if ((*(double *)(unaff_RDI + 0x118) == local_58) &&
     (!NAN(*(double *)(unaff_RDI + 0x118)) && !NAN(local_58))) {
    return;
  }
LAB_012678b2:
  FUN_00d64850();
  *(double *)(unaff_RDI + 0x118) = local_58;
  FUN_00d64910();
  return;
}


