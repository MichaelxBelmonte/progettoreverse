// Function: FUN_00785940
// Address: 00785940
// Size: 1276 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x00785dbd) */
/* WARNING: Removing unreachable block (ram,0x00785dcd) */
/* WARNING: Removing unreachable block (ram,0x007859ee) */
/* WARNING: Removing unreachable block (ram,0x007859f7) */
/* WARNING: Removing unreachable block (ram,0x00785c7b) */
/* WARNING: Removing unreachable block (ram,0x00785c84) */
/* WARNING: Removing unreachable block (ram,0x00785e39) */
/* WARNING: Removing unreachable block (ram,0x00785e46) */

void FUN_00785940(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar4;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  
  if (unaff_RDI[0x26] == 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    if ((local_58 == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x628))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a11a0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0170f550();
    FUN_0167ab60();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537d40();
    if ((local_58 == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      if (0 < *(int *)(local_60 + 0xc)) {
        iVar4 = 0;
        do {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016670b0();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (local_70 == local_60) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016670f0();
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(local_60 + 0xc));
      }
      FUN_0049cb70();
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00e8b020();
    if (local_58 == '\0') {
      if (local_60 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_60 == 0) {
      return;
    }
    if (0 < *(int *)(local_60 + 0xc)) {
      iVar4 = 0;
      do {
        FUN_00e33de0();
        lVar2 = DAT_02729618;
        if (DAT_02729618 != 0) {
          FUN_00d50b00();
        }
        FUN_000175c0();
        lVar1 = *unaff_RSI;
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (local_70 == lVar1) {
          FUN_00e8afb0();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(local_60 + 0xc));
    }
    FUN_00097c40();
    FUN_00d50b20();
  }
  return;
}


