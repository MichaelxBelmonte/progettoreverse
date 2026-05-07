// Function: FUN_01327470
// Address: 01327470
// Size: 762 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x0132777a) */
/* WARNING: Removing unreachable block (ram,0x01327787) */
/* WARNING: Removing unreachable block (ram,0x01327627) */
/* WARNING: Removing unreachable block (ram,0x01327630) */
/* WARNING: Removing unreachable block (ram,0x01327677) */
/* WARNING: Removing unreachable block (ram,0x013276a0) */
/* WARNING: Removing unreachable block (ram,0x01327679) */
/* WARNING: Removing unreachable block (ram,0x013276a2) */

void FUN_01327470(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RDI;
  pthread_key_t pVar5;
  longlong local_88;
  char local_80;
  longlong local_58;
  char local_50;
  int local_40;
  
  *(undefined8 *)(unaff_RDI + 0x38) = 0;
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb480();
    if ((local_80 == '\0') && (local_88 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      if (0 < *(int *)(local_88 + 0xc)) {
        pVar5 = 0;
        do {
          lVar1 = local_58;
          pvVar2 = _pthread_getspecific(pVar5);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0124c6e0();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
              goto LAB_01327640;
            }
          }
          else if (local_58 != 0) {
LAB_01327640:
            local_50 = '\0';
            local_58 = 0;
            local_40 = -1;
            while( true ) {
              lVar3 = (longlong)local_40;
              local_40 = local_40 + 1;
              if (*(int *)(lVar1 + 0xc) <= local_40) break;
              lVar4 = *(longlong *)(lVar1 + 0x10);
              local_58 = *(longlong *)(lVar4 + 8 + lVar3 * 8);
              pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
              lVar3 = local_58;
              if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                lVar3 = *(longlong *)
                         (local_58 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
              }
              if (*(longlong *)(lVar3 + 0x208) != 0) {
                FUN_00d64850();
                *(undefined8 *)(lVar3 + 0x208) = 0;
                FUN_00d64910();
              }
            }
            FUN_00115190();
            FUN_00d50b20();
          }
          pVar5 = pVar5 + 1;
        } while ((int)pVar5 < *(int *)(local_88 + 0xc));
      }
      FUN_00115e00();
      FUN_00d50b20();
    }
  }
  FUN_00d505d0();
  return;
}


