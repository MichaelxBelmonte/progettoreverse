// Function: FUN_01a13460
// Address: 01a13460
// Size: 682 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x01a136b3) */
/* WARNING: Removing unreachable block (ram,0x01a136bc) */
/* WARNING: Removing unreachable block (ram,0x01a136e0) */
/* WARNING: Removing unreachable block (ram,0x01a136e9) */

void FUN_01a13460(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong **pplVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  undefined8 *local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    local_38 = puVar4;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar8 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
        local_48 = plVar2;
        FUN_0006e1c0();
        pplVar7 = (longlong **)&DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_48;
          if (cVar3 == '\0') {
            pplVar7 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar7 != (longlong *)0x0) {
          pvVar5 = _pthread_getspecific((pthread_key_t)pplVar7);
          pVar6 = (pthread_key_t)pplVar7;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01274b60();
          plVar2 = local_48;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01274b60();
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_48 = local_58;
            local_40 = '\0';
            FUN_00d235a0();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_002d7220();
    puVar4 = local_38;
  }
  if (*(int *)((longlong)puVar4 + 0xc) == 0) {
    FUN_01f07b90();
  }
  else {
    FUN_01f07b90();
  }
  (**(code **)(*unaff_RDI + 0x678))();
  FUN_00d50b20();
  return;
}


