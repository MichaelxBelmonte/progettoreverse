// Function: FUN_019d4170
// Address: 019d4170
// Size: 782 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x019d42f3) */
/* WARNING: Removing unreachable block (ram,0x019d42fc) */
/* WARNING: Removing unreachable block (ram,0x019d429c) */
/* WARNING: Removing unreachable block (ram,0x019d42a5) */
/* WARNING: Removing unreachable block (ram,0x019d4328) */
/* WARNING: Removing unreachable block (ram,0x019d4331) */

void FUN_019d4170(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((int)unaff_RDI[0x5e] != unaff_ESI) {
    if (unaff_ESI != 0) {
      *(int *)((longlong)unaff_RDI + 0x2f4) = unaff_ESI;
    }
    *(int *)(unaff_RDI + 0x5e) = unaff_ESI;
    (**(code **)(*unaff_RDI + 0xa00))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      (**(code **)(*unaff_RDI + 0xa00))();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c9740();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d46530();
        local_40 = DAT_026dc290;
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
          local_40 = DAT_026dc290;
        }
        DAT_026dc290 = local_40;
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        FUN_00ca0840();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00d6f370();
    lVar1 = DAT_027e1348;
    if (DAT_027e1348 != 0) {
      FUN_00d50b00();
    }
    FUN_00d707b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    lVar1 = DAT_02709dd0;
    if (DAT_02709dd0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_80 = 0;
    local_78 = '\0';
    FUN_00d40470(&local_80,&stack0xffffffffffffff90,1,3);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


