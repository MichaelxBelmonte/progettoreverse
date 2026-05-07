// Function: FUN_019f2c90
// Address: 019f2c90
// Size: 1874 bytes
// Class: MUPitchSystemRulerView


/* WARNING: Removing unreachable block (ram,0x019f3339) */
/* WARNING: Removing unreachable block (ram,0x019f3342) */
/* WARNING: Removing unreachable block (ram,0x019f2f36) */
/* WARNING: Removing unreachable block (ram,0x019f2f3f) */
/* WARNING: Removing unreachable block (ram,0x019f2fcc) */
/* WARNING: Removing unreachable block (ram,0x019f2fd5) */
/* WARNING: Removing unreachable block (ram,0x019f33b0) */
/* WARNING: Removing unreachable block (ram,0x019f33b9) */
/* WARNING: Removing unreachable block (ram,0x019f3217) */
/* WARNING: Removing unreachable block (ram,0x019f3220) */
/* WARNING: Removing unreachable block (ram,0x019f328a) */
/* WARNING: Removing unreachable block (ram,0x019f2e91) */
/* WARNING: Removing unreachable block (ram,0x019f3297) */
/* WARNING: Removing unreachable block (ram,0x019f32ab) */
/* WARNING: Removing unreachable block (ram,0x019f32b8) */
/* WARNING: Removing unreachable block (ram,0x019f32c6) */
/* WARNING: Removing unreachable block (ram,0x019f3312) */
/* WARNING: Removing unreachable block (ram,0x019f3317) */
/* WARNING: Removing unreachable block (ram,0x019f32e9) */
/* WARNING: Removing unreachable block (ram,0x019f331f) */
/* WARNING: Removing unreachable block (ram,0x019f334c) */
/* WARNING: Removing unreachable block (ram,0x019f3354) */
/* WARNING: Removing unreachable block (ram,0x019f335a) */
/* WARNING: Removing unreachable block (ram,0x019f3363) */
/* WARNING: Removing unreachable block (ram,0x019f3368) */
/* WARNING: Removing unreachable block (ram,0x019f3372) */
/* WARNING: Removing unreachable block (ram,0x019f337f) */
/* WARNING: Removing unreachable block (ram,0x019f2ea2) */
/* WARNING: Removing unreachable block (ram,0x019f2eb7) */
/* WARNING: Removing unreachable block (ram,0x019f2ecb) */
/* WARNING: Removing unreachable block (ram,0x019f2ed9) */
/* WARNING: Removing unreachable block (ram,0x019f2fa6) */
/* WARNING: Removing unreachable block (ram,0x019f2fab) */
/* WARNING: Removing unreachable block (ram,0x019f2f00) */
/* WARNING: Removing unreachable block (ram,0x019f2fb3) */
/* WARNING: Removing unreachable block (ram,0x019f2fdf) */
/* WARNING: Removing unreachable block (ram,0x019f2fe7) */
/* WARNING: Removing unreachable block (ram,0x019f2fed) */
/* WARNING: Removing unreachable block (ram,0x019f2ff6) */
/* WARNING: Removing unreachable block (ram,0x019f2ffb) */
/* WARNING: Removing unreachable block (ram,0x019f3001) */
/* WARNING: Removing unreachable block (ram,0x019f300a) */
/* WARNING: Removing unreachable block (ram,0x019f300f) */
/* WARNING: Removing unreachable block (ram,0x019f2d27) */
/* WARNING: Removing unreachable block (ram,0x019f2d50) */
/* WARNING: Removing unreachable block (ram,0x019f2d29) */
/* WARNING: Removing unreachable block (ram,0x019f2d52) */
/* WARNING: Removing unreachable block (ram,0x019f303d) */
/* WARNING: Removing unreachable block (ram,0x019f3046) */

void FUN_019f2c90(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar7;
  int local_78;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  puVar6 = (undefined *)*unaff_RSI;
  if (puVar6 != (undefined *)0x0) {
    local_78 = -1;
    while (local_78 = local_78 + 1, local_78 < *(int *)(puVar6 + 0xc)) {
      pVar4 = (pthread_key_t)*(undefined8 *)(puVar6 + 0x10);
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4d60();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 == 0) {
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012eb770();
        FUN_00dd6a00();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_50 = local_40;
        local_48 = '\0';
        FUN_00d235a0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4d60();
        FUN_00dd6a00();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_50 = local_40;
        local_48 = '\0';
        FUN_00d235a0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_000be170();
    puVar5 = puVar6;
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar7 = 0;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4d60();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 == 0) {
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          FUN_00dd6a00();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d235a0();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4d60();
          FUN_00dd6a00();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d235a0();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        local_48 = '\0';
        local_50 = local_40;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
  FUN_00d242c0();
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


