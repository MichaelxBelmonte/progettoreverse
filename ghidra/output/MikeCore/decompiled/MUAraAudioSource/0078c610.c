// Function: FUN_0078c610
// Address: 0078c610
// Size: 1467 bytes
// Class: MUAraAudioSource


/* WARNING: Removing unreachable block (ram,0x0078ca31) */
/* WARNING: Removing unreachable block (ram,0x0078cb94) */
/* WARNING: Removing unreachable block (ram,0x0078cba1) */
/* WARNING: Removing unreachable block (ram,0x0078c7c3) */
/* WARNING: Removing unreachable block (ram,0x0078c7cf) */
/* WARNING: Removing unreachable block (ram,0x0078c8f3) */
/* WARNING: Removing unreachable block (ram,0x0078c8fc) */
/* WARNING: Removing unreachable block (ram,0x0078c937) */
/* WARNING: Removing unreachable block (ram,0x0078c960) */
/* WARNING: Removing unreachable block (ram,0x0078c697) */
/* WARNING: Removing unreachable block (ram,0x0078c6c0) */
/* WARNING: Removing unreachable block (ram,0x0078c699) */
/* WARNING: Removing unreachable block (ram,0x0078c6c2) */
/* WARNING: Removing unreachable block (ram,0x0078c939) */
/* WARNING: Removing unreachable block (ram,0x0078c962) */

longlong * FUN_0078c610(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  code *pcVar9;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  code *pcVar10;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  int local_80;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40;
  
  cVar2 = FUN_00751ba0();
  if (cVar2 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    local_98 = *param_2;
    if ((char)param_2[1] != '\0') {
      *unaff_RDI = local_98;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return unaff_RDI;
    }
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      local_90 = '\0';
      local_98 = 0;
      local_80 = -1;
      while( true ) {
        lVar3 = (longlong)local_80;
        local_80 = local_80 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_80) break;
        local_98 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar3 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar1 + 0x10));
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4c40();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_000be170();
    }
    FUN_00323290();
    if ((local_90 == '\0') && (local_98 != 0)) {
      FUN_00d50b00();
    }
    if (*(char *)(unaff_RSI + 0x170) == '\0') {
      pcVar10 = FUN_0165a0b0;
      lVar1 = *param_2;
    }
    else {
      pcVar10 = FUN_0165a070;
      lVar1 = *param_2;
    }
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        pVar6 = 0;
        do {
          lVar3 = local_70;
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4c40();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
              goto LAB_0078c904;
            }
          }
          else if (local_70 != 0) {
LAB_0078c904:
            local_68 = '\0';
            local_70 = 0;
            local_58 = -1;
            while( true ) {
              lVar5 = (longlong)local_58;
              local_58 = local_58 + 1;
              if (*(int *)(lVar3 + 0xc) <= local_58) break;
              lVar8 = *(longlong *)(lVar3 + 0x10);
              local_70 = *(longlong *)(lVar8 + 8 + lVar5 * 8);
              pvVar4 = _pthread_getspecific((pthread_key_t)lVar8);
              pVar7 = (pthread_key_t)lVar8;
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012f51f0();
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (local_48 != 0) {
                pvVar4 = _pthread_getspecific(pVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f51f0();
                pcVar9 = pcVar10;
                (*pcVar10)();
                pVar7 = (pthread_key_t)pcVar9;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if (local_70 != local_48) {
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012f51f0();
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01657380();
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar2 = FUN_01650890();
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_a0 != '\0') && (local_a8 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar2 == '\0') {
                    local_40 = '\0';
                    FUN_00d21140();
                    local_48 = local_70;
                  }
                }
              }
            }
            FUN_000be170();
            FUN_00d50b20();
          }
          pVar6 = pVar6 + 1;
        } while ((int)pVar6 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
  }
  *unaff_RDI = local_98;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


