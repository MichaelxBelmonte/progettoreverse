// Function: FUN_006cff00
// Address: 006cff00
// Size: 813 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"


/* WARNING: Removing unreachable block (ram,0x006cff92) */
/* WARNING: Removing unreachable block (ram,0x006cffb0) */
/* WARNING: Removing unreachable block (ram,0x006cff94) */
/* WARNING: Removing unreachable block (ram,0x006cffb2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_006cff00(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  ulonglong unaff_R12;
  longlong local_68;
  char local_60;
  int local_50;
  longlong *local_40;
  char local_38;
  
  FUN_006cb500();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_006cff45;
    }
  }
  else if (local_68 != 0) {
LAB_006cff45:
    local_50 = -1;
    while( true ) {
      local_50 = local_50 + 1;
      unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),local_50 < *(int *)(local_68 + 0xc));
      if (*(int *)(local_68 + 0xc) <= local_50) break;
      pvVar4 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(local_68 + 0x10));
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      plVar1 = local_40;
      if ((DAT_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_027e77e8 = FUN_0015ef90();
        _DAT_027e77d0 = "MULSSGenerator";
        _DAT_027e77d8 = 0x70;
        _DAT_027e77e0 = FUN_0015ef30;
        _DAT_027e77f0 = 0;
        uRam00000000027e77f8 = 0;
        _DAT_027e7800 = 0;
        uRam00000000027e7808 = 0;
        _DAT_027e7810 = 0;
        uRam00000000027e7818 = 0;
        _DAT_027e7820 = 0;
        uRam00000000027e7828 = 0;
        _DAT_027e7830 = 0;
        uRam00000000027e7838 = 0;
        _DAT_027e7840 = 0;
        uRam00000000027e7848 = 0;
        _DAT_027e7850 = 0;
        uRam00000000027e7858 = 0;
        _DAT_027e7860 = 0;
        uRam00000000027e7868 = 0;
        _DAT_027e7870 = 0;
        uRam00000000027e7878 = 0;
        _DAT_027e7880 = 0;
        uRam00000000027e7888 = 0;
        _DAT_027e7890 = 0;
        ___cxa_guard_release();
      }
      pplVar6 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_40;
        if (cVar2 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar6;
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar6 + 1) = 0;
      }
      pVar5 = (pthread_key_t)pplVar6;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6cb0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_006d0130;
          }
        }
        else if (local_40 != (longlong *)0x0) {
LAB_006d0130:
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_017f2980();
          if (cVar2 != '\0') {
            FUN_00d50b20();
            FUN_00d50b20();
            break;
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_000be170();
    FUN_00d50b20();
    goto LAB_006d024e;
  }
  unaff_R12 = 0;
LAB_006d024e:
  return unaff_R12 & 0xffffffff;
}


