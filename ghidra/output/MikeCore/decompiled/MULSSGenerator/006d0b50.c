// Function: FUN_006d0b50
// Address: 006d0b50
// Size: 1195 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x006d0f5b) */
/* WARNING: Removing unreachable block (ram,0x006d0f67) */

undefined8 * FUN_006d0b50(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  undefined8 *unaff_RDI;
  int iVar7;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d0;
  char local_c8;
  longlong local_b0;
  char local_a8;
  longlong local_90;
  char local_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar6 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  local_68 = puVar3;
  (*DAT_02572370)();
  FUN_006cb500();
  if (local_50 != 0) {
    FUN_006cb500();
    if (*(int *)(local_108 + 0xc) == 0) {
      cVar2 = '\0';
    }
    else {
      FUN_006cb500();
      local_60 = local_f8;
      FUN_00d23310();
      local_40[0] = local_88[0];
      pcVar4 = local_40;
      if (local_88[0] != '\0') {
        pcVar4 = local_88;
      }
      *pcVar4 = '\0';
      if ((local_88[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      if (local_d0 == 0) {
        cVar2 = '\0';
      }
      else {
        FUN_006cb500();
        local_58 = local_e8;
        FUN_00d23310();
        pcVar6 = local_38;
        pcVar4 = local_88;
        if (local_88[0] == '\0') {
          pcVar4 = pcVar6;
        }
        local_38[0] = local_88[0];
        *pcVar4 = '\0';
        if ((local_88[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_012ccc80();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_100 != '\0') {
      FUN_00d50b20();
    }
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') goto LAB_006d0fea;
  }
  FUN_006cb500();
  if (local_88[0] == '\0') {
    if (local_90 == 0) goto LAB_006d0fea;
    FUN_00d50b00();
  }
  else if (local_90 == 0) goto LAB_006d0fea;
  local_88[0] = '\0';
  local_70 = 0;
  local_78 = 0;
  if (0 < *(int *)(local_90 + 0xc)) {
    iVar7 = 0;
    do {
      pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      lVar1 = local_50;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_004f9670();
        lVar1 = local_50;
        if (local_48 == '\0') {
          if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
        if (lVar1 != 0) {
          local_48 = '\0';
          local_50 = lVar1;
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      iVar7 = iVar7 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar7);
    } while (iVar7 < *(int *)(local_90 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006d0fea:
  *unaff_RDI = local_68;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


