// Function: FUN_00334b30
// Address: 00334b30
// Size: 918 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x00334e65) */
/* WARNING: Removing unreachable block (ram,0x00334e71) */
/* WARNING: Removing unreachable block (ram,0x00334d62) */
/* WARNING: Removing unreachable block (ram,0x00334d6f) */

ulonglong FUN_00334b30(undefined8 param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_a0;
  char local_98;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60 [16];
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_003322a0();
  if (local_60[0] == '\0') {
    if (local_68 == 0) {
LAB_00334bf3:
      uVar7 = 0;
      goto LAB_00334ea9;
    }
    FUN_00d50b00();
    if (*(int *)(local_68 + 0xc) < 1) goto LAB_00334bec;
LAB_00334b6d:
    FUN_00d23310();
    pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_60[0]);
    pcVar8 = local_38;
    if (local_60[0] != '\0') {
      pcVar8 = local_60;
    }
    local_38[0] = local_60[0];
    *pcVar8 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    local_40 = local_78;
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    uVar3 = FUN_01caea40();
    lVar2 = local_40;
    if ((int)uVar3 < 0) {
LAB_00334d36:
      uVar7 = 0;
      local_40 = lVar2;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      iVar1 = *(int *)(local_68 + 0xc);
      if (local_60[0] != '\0') {
        FUN_00d50b20();
      }
      if (iVar1 <= (int)uVar3) goto LAB_00334d36;
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      uVar7 = (ulonglong)uVar3;
      lVar2 = *(longlong *)(*(longlong *)(local_68 + 0x10) + uVar7 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      uVar9 = (ulonglong)param_2;
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((lVar2 != 0) && ((char)param_2 != '\0')) {
        local_60[0] = '\0';
        local_48 = 0;
        local_50 = 0;
        if (0 < *(int *)(local_68 + 0xc)) {
          lVar10 = 0;
          do {
            uVar9 = *(ulonglong *)(*(longlong *)(local_68 + 0x10) + lVar10 * 8);
            pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              uVar9 = *(ulonglong *)(uVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
            FUN_012a2350();
            lVar10 = lVar10 + 1;
            local_50 = CONCAT44(local_50._4_4_,(int)lVar10);
          } while ((int)lVar10 < *(int *)(local_68 + 0xc));
        }
        FUN_001159b0();
      }
      if (lVar2 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = CONCAT71((int7)(uVar9 >> 8),1);
        FUN_00d50b20();
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_68 == 0) goto LAB_00334bf3;
    if (0 < *(int *)(local_68 + 0xc)) goto LAB_00334b6d;
LAB_00334bec:
    uVar7 = 0;
  }
  FUN_00d50b20();
LAB_00334ea9:
  return uVar7 & 0xffffffff;
}


