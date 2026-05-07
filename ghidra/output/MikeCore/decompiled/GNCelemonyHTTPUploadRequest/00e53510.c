// Function: FUN_00e53510
// Address: 00e53510
// Size: 635 bytes
// Class: GNCelemonyHTTPUploadRequest


/* WARNING: Removing unreachable block (ram,0x00e5370e) */
/* WARNING: Removing unreachable block (ram,0x00e53717) */
/* WARNING: Removing unreachable block (ram,0x00e5366e) */
/* WARNING: Removing unreachable block (ram,0x00e53677) */
/* WARNING: Removing unreachable block (ram,0x00e53697) */
/* WARNING: Removing unreachable block (ram,0x00e536a0) */
/* WARNING: Removing unreachable block (ram,0x00e53737) */
/* WARNING: Removing unreachable block (ram,0x00e53740) */

undefined8 FUN_00e53510(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong unaff_RDI;
  bool bVar7;
  longlong local_58;
  char local_50;
  int local_34;
  
  cVar3 = FUN_00dab510();
  if (cVar3 == '\0') {
    return 0;
  }
  *(undefined8 *)(unaff_RDI + 0x10) = *param_1;
  uVar4 = FUN_00dac670();
  *(undefined8 *)(unaff_RDI + 0x28) = uVar4;
  FUN_00dac5e0();
  cVar3 = FUN_00dab510();
  if (cVar3 == '\0') {
    return 0;
  }
  FUN_00d79550();
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  lVar6 = lVar1;
  if (lVar1 == local_58) goto LAB_00e535dc;
  lVar6 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      lVar6 = 0;
      goto LAB_00e5359a;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x18);
    *(longlong *)(unaff_RDI + 0x18) = local_58;
  }
  else {
    local_50 = '\0';
LAB_00e5359a:
    *(longlong *)(unaff_RDI + 0x18) = lVar6;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar6 = local_58;
  }
LAB_00e535dc:
  if ((local_50 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  pcVar2 = DAT_0258e9a8;
  bVar7 = local_34 != 0;
  local_34 = local_34 + -1;
  if (bVar7) {
    if (param_2 < 5) {
      do {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_0258e990;
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *(undefined1 *)(puVar5 + 2) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
        (*pcVar2)();
        FUN_00e5d2a0();
        FUN_00d795e0();
        FUN_00d50b20();
        bVar7 = local_34 != 0;
        local_34 = local_34 + -1;
      } while (bVar7);
    }
    else {
      do {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_0258e990;
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *(undefined1 *)(puVar5 + 2) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
        (*pcVar2)();
        FUN_00e5d630();
        FUN_00d795e0();
        FUN_00d50b20();
        bVar7 = local_34 != 0;
        local_34 = local_34 + -1;
      } while (bVar7);
    }
  }
  cVar3 = FUN_00dab510();
  if (cVar3 == '\0') {
    return 0;
  }
  uVar4 = FUN_00dac670();
  *(undefined8 *)(unaff_RDI + 0x30) = uVar4;
  return 1;
}


