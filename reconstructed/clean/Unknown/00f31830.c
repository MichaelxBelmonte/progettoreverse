// Function: FUN_00f31830
// Address: 00f31830
// Size: 585 bytes
// Class: Unknown

char * FUN_00f31830(char *param_1,uint64_t param_2)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int64_t lVar5;
  char *pcVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  char *pcVar9;
  uint64_t uVar10;
  
  pcVar9 = param_1;
  lVar5 = FUN_00f2df60();
  pcVar6 = (char *)FUN_00f2fd80();
  do {
    if (pcVar6 == (char *)0x0) {
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0x50) == '\0')) {
        *(void*)(lVar5 + 0x50) = 1;
        *(void*)(lVar5 + 0x54) = 5;
        _strlen(pcVar9);
        FUN_00f2d870();
        *(void*)(lVar5 + 100) = 0xffffffffffffffff;
      }
      return (char *)0x0;
    }
    if (*pcVar6 == '<') {
      if (pcVar6[1] == '/') {
        pcVar9 = "";
        if (pcVar6[2] == '\0') goto LAB_00f319f0;
        cVar3 = '\0';
      }
      else {
        cVar3 = '/';
        pcVar9 = "/";
        if (pcVar6[1] == '\0') {
LAB_00f319f0:
          cVar3 = *pcVar9;
        }
      }
      if (cVar3 == '\0') {
        return pcVar6;
      }
      plVar8 = (int64_t *)FUN_00f30cf0(pcVar9,(char *)((uint64_t)param_1 & 0xffffffff));
      if (plVar8 == (int64_t *)0x0) {
        return (char *)0x0;
      }
      pcVar9 = (char *)((uint64_t)param_1 & 0xffffffff);
      (**(code **)(*plVar8 + 0x18))(pcVar9,param_2);
      FUN_00f2dd10();
    }
    else {
      if (*pcVar6 == '\0') {
        return pcVar6;
      }
      plVar7 = operator_new((ulong)pcVar9);
      FUN_00f2dc20();
      *plVar7 = (int64_t)&g_025939b8;
      FUN_00f2d870();
      *(void*)(plVar7 + 10) = 0;
      pcVar9 = (char *)((uint64_t)param_1 & 0xffffffff);
      uVar10 = param_2;
      (**(code **)(*plVar7 + 0x18))();
      plVar8 = (int64_t *)plVar7[7];
      if (*plVar8 != 0) {
        pcVar6 = (char *)0x0;
        pcVar2 = (char *)((int64_t)&MACH_HEADER.magic + 1);
        do {
          pcVar9 = pcVar2;
          bVar1 = *(byte *)((int64_t)(plVar8 + 2) + (int64_t)pcVar6);
          if ((char)bVar1 < '\0') {
            uVar4 = ___maskrune((__darwin_ct_rune_t)pcVar6,(ulong)uVar10);
          }
          else {
            pcVar6 = &g_00004000;
            uVar4 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + (uint64_t)bVar1 * 4 + 0x3c) &
                    0x4000;
          }
          if (((uVar4 == 0) && (bVar1 != 0xd)) && (bVar1 != 10)) {
            FUN_00f2dd10();
            pcVar9 = pcVar6;
            goto LAB_00f31891;
          }
          plVar8 = (int64_t *)plVar7[7];
          pcVar6 = pcVar9;
          pcVar2 = (char *)(uint64_t)((int)pcVar9 + 1);
        } while (pcVar9 < (char *)*plVar8);
      }
      (**(code **)(*plVar7 + 8))();
    }
LAB_00f31891:
    pcVar6 = (char *)FUN_00f2fd80();
  } while( true );
}

