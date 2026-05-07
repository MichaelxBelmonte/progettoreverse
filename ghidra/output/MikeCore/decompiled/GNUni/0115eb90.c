// Function: FUN_0115eb90
// Address: 0115eb90
// Size: 515 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MULoop"
//   "_project"
//   "MULoopUser"
//   "MULoopMusicianContract"
//   "MULoopLibrary"
//   "_projects"
//   "MULoopProducerContract"


void FUN_0115eb90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_01150e50();
  *unaff_RDI = &DAT_026168f0;
  FUN_0115eea0();
  unaff_RDI[9] = 0;
  lVar2 = FUN_0115e7d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115ef80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_projects";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_0115e7d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115f070();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_project";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  puVar4 = unaff_RDI + 0xb;
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_0115e7d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115f160();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_project";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProducerContract",param_3,param_4,puVar4);
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_0115e7d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115f250();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_project";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopMusicianContract");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_0115e7d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115f340();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_projects";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  return;
}


