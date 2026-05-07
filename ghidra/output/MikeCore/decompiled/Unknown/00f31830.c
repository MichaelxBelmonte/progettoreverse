// Function: FUN_00f31830
// Address: 00f31830
// Size: 585 bytes
// Class: Unknown


char * FUN_00f31830(char *param_1,undefined8 param_2)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  pcVar9 = param_1;
  lVar5 = FUN_00f2df60();
  pcVar6 = (char *)FUN_00f2fd80();
  do {
    if (pcVar6 == (char *)0x0) {
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0x50) == '\0')) {
        *(undefined1 *)(lVar5 + 0x50) = 1;
        *(undefined4 *)(lVar5 + 0x54) = 5;
        _strlen(pcVar9);
        FUN_00f2d870();
        *(undefined8 *)(lVar5 + 100) = 0xffffffffffffffff;
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
      plVar8 = (longlong *)FUN_00f30cf0(pcVar9,(char *)((ulonglong)param_1 & 0xffffffff));
      if (plVar8 == (longlong *)0x0) {
        return (char *)0x0;
      }
      pcVar9 = (char *)((ulonglong)param_1 & 0xffffffff);
      (**(code **)(*plVar8 + 0x18))(pcVar9,param_2);
      FUN_00f2dd10();
    }
    else {
      if (*pcVar6 == '\0') {
        return pcVar6;
      }
      plVar7 = operator_new((ulong)pcVar9);
      FUN_00f2dc20();
      *plVar7 = (longlong)&DAT_025939b8;
      FUN_00f2d870();
      *(undefined1 *)(plVar7 + 10) = 0;
      pcVar9 = (char *)((ulonglong)param_1 & 0xffffffff);
      uVar10 = param_2;
      (**(code **)(*plVar7 + 0x18))();
      plVar8 = (longlong *)plVar7[7];
      if (*plVar8 != 0) {
        pcVar6 = (char *)0x0;
        pcVar2 = (char *)((longlong)&MACH_HEADER.magic + 1);
        do {
          pcVar9 = pcVar2;
          bVar1 = *(byte *)((longlong)(plVar8 + 2) + (longlong)pcVar6);
          if ((char)bVar1 < '\0') {
            uVar4 = ___maskrune((__darwin_ct_rune_t)pcVar6,(ulong)uVar10);
          }
          else {
            pcVar6 = &DAT_00004000;
            uVar4 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + (ulonglong)bVar1 * 4 + 0x3c) &
                    0x4000;
          }
          if (((uVar4 == 0) && (bVar1 != 0xd)) && (bVar1 != 10)) {
            FUN_00f2dd10();
            pcVar9 = pcVar6;
            goto LAB_00f31891;
          }
          plVar8 = (longlong *)plVar7[7];
          pcVar6 = pcVar9;
          pcVar2 = (char *)(ulonglong)((int)pcVar9 + 1);
        } while (pcVar9 < (char *)*plVar8);
      }
      (**(code **)(*plVar7 + 8))();
    }
LAB_00f31891:
    pcVar6 = (char *)FUN_00f2fd80();
  } while( true );
}


